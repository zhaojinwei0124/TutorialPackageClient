﻿/********************************************************************
	created:	2014/01/14
	created:	14:1:2014   13:31
	filename: 	NumChooseController.cs
	author:		王迪
	
	purpose:	选择数字界面
*********************************************************************/
using UnityEngine;
using System.Collections;
using Module.Log;

public class NumChooseController : UIControllerBase<NumChooseController> {

    public class NumChooseInfo
    {
        public NumChooseInfo(int minValue, int maxVaue, string szTitle, OKClickDelegate okClickFun, int stepValue, string totalTitle = "", string OkButtomTitle = "", bool showComsume = false, string comsumeName = "", string comsumeicon = "", int comsumeNum = 0)
        {
            _minValue = minValue;
            _maxValue = maxVaue;
            _szTitle = szTitle;
            _okClickFun = okClickFun;
			_stepValue = stepValue;
            _totalTitle = totalTitle;
            _okbuttomTitle = OkButtomTitle;
            _showComsume = showComsume;
            _comsumeName = comsumeName;
            _comsumeicon = comsumeicon;
            _comsumeNum = comsumeNum;
        }
        public int _minValue;
        public int _maxValue;
        public string _szTitle;
        public OKClickDelegate _okClickFun;
		public int _stepValue;
        public string _totalTitle;
        public string _okbuttomTitle;
        public bool _showComsume;
        public string _comsumeName;
        public string _comsumeicon;
        public int _comsumeNum;
    }

    public UIInput inputNum;
    public UILabel title;
    //新增
    public UILabel m_TotalTitle;
    public UILabel m_OkButomTitle;
    public GameObject m_ComsumePart;
    public UILabel m_ComsumeName;
    public UISprite m_ComsumeIcon;
    public UILabel m_ComsumeNum;
    //新增

    

    public delegate void OKClickDelegate(int curNum);       // 确定按钮响应，返回当前数值
    private OKClickDelegate delOkClick = null;

    private int m_minValue = 1;         // 下限
    private int m_maxValue = 999;        // 上限
    private int m_curNum   = 0;         // 当前数字
	private int m_stepValue = 1;        // 每次批量变化的数值
    private bool m_isAdd = false;
    private bool m_isDel = false;
    int m_unitPrice = 0;

    /// <summary>
    /// Select the quantity
    /// </summary>
    /// <param name="minValue"></param>
    /// <param name="maxValue"></param>
    /// <param name="szTitle"></param>
    /// <param name="okClickFun"></param>
    /// <param name="stepValue"></param>
    /// <param name="totalTitle"></param>
    /// <param name="OkButtomTitle"></param>
    /// <param name="showComsume"></param>
    /// <param name="comsumeName"></param>
    /// <param name="comsumeicon"></param>
    /// <param name="comsumeNum">unit price</param>
	public static void OpenWindow(int minValue, int maxValue, string szTitle, OKClickDelegate okClickFun,int stepValue, string totalTitle = "", string OkButtomTitle = "", bool showComsume = false, string comsumeName = "", string comsumeicon = "", int comsumeNum = 0)
    {
		NumChooseInfo curInfo = new NumChooseInfo(minValue, maxValue, szTitle, okClickFun,stepValue,totalTitle,OkButtomTitle,showComsume,comsumeName,comsumeicon,comsumeNum);
        UIManager.ShowUI(UIInfo.NumChoose, OnShowNumChoose, curInfo);
    }

    public static void OnShowNumChoose(bool bSuccess, object param)
    {
        if(!bSuccess)
        {
            return;
        }

        if (null == param)
        {
            LogModule.ErrorLog("ShowNumChoose:param not define.");
            return;
        }

        NumChooseInfo curInfo = param as NumChooseInfo;
        if (curInfo == null)
        {
            LogModule.ErrorLog("NumChooseInfo:curInfo is null.");
            return;
        }
		NumChooseController.Instance().SetData(curInfo._minValue, curInfo._maxValue, curInfo._szTitle, curInfo._okClickFun,curInfo._stepValue,
            curInfo._totalTitle, curInfo._okbuttomTitle,curInfo._showComsume,curInfo._comsumeName, curInfo._comsumeicon, curInfo._comsumeNum);
    }
    void Awake()
    {
        SetInstance(this);
    }

    void Start()
    {
        InvokeRepeating("SlowUpdate", 0, 0.1f);
        if (inputNum != null)
        {
            inputNum.defaultText = "";
        }
    }

    void OnDestroy()
    {
        CancelInvoke("SlowUpdate");
    }

    void SlowUpdate()
    {
        if (m_isAdd)
        {
            OnClickAddNum();
            return;
        }
        if (m_isDel)
        {
            OnClickDelNum();
            return;
        }
        int curNum = 0;
        bool bCanParse = int.TryParse(inputNum.value, out curNum);
        if (bCanParse)
        {
            if (curNum != m_curNum)
            {
                m_curNum = curNum;
                UpdateConsumeArea();
            }
        }
    }

    public void SetData(int minValue, int maxVaue, string szTitle, OKClickDelegate okClickFun, int stepValue, string totalTitle = "", string OkButtomTitle = "", bool showComsume = false, string comsumeName = "", string comsumeicon = "", int comsumeNum = 0)
    {
        delOkClick = okClickFun;
        m_maxValue = maxVaue;
        m_minValue = minValue;
        m_curNum = minValue;
        inputNum.value = minValue.ToString();
        title.text = szTitle;
		m_stepValue = stepValue > 0 ? stepValue : 1;
        //新增
        m_TotalTitle.text = totalTitle;
        m_OkButomTitle.text = OkButtomTitle;
        NGUITools.SetActive(m_ComsumePart, showComsume);
        if (!string.IsNullOrEmpty(comsumeName))
        {
            m_ComsumeName.text = comsumeName;
        }
        m_ComsumeIcon.spriteName = comsumeicon;
        m_unitPrice = comsumeNum;
        UpdateConsumeArea();
    }

    void AddOnPress()
    {
        m_isAdd = true;
    }

    void AddOnRelease()
    {
        m_isAdd = false;
    }

    void DelOnPress()
    {
        m_isDel = true;
    }

    void DelOnRelease()
    {
        m_isDel = false;
    }

    void UpdateConsumeArea()
    {
        if (m_ComsumePart.activeSelf)
        {
            m_ComsumeNum.text = (m_unitPrice * m_curNum).ToString();
        }
    }
	
    // +1
    void OnClickAddNum()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(inputNum.value, out curNum);
        if (bCanParse)
        {
            if (curNum != m_maxValue)
            {
                if (1 == curNum && m_stepValue > curNum)
                {
                    curNum = Mathf.Min(m_maxValue, m_stepValue);
                }
                else
                {
                    curNum = Mathf.Min(m_maxValue, curNum + m_stepValue);
                }
            }
            else
            {
                curNum = m_minValue;
            }
			
            inputNum.value = curNum.ToString();
        }

        m_curNum = curNum;
        UpdateConsumeArea();
    }

    // -1
    void OnClickDelNum()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(inputNum.value, out curNum);
        if (bCanParse)
        {
			int tempModValue = curNum % m_stepValue;
			if(m_maxValue == curNum && (tempModValue != 0))
			{
				curNum = Mathf.Max(m_minValue, curNum - tempModValue);
			}
			else
			{
                if (m_minValue == curNum)
                {
                    curNum = m_maxValue;
                }
                else
                {
                    curNum = Mathf.Max(m_minValue, curNum - m_stepValue);
                }
			}
            inputNum.value = curNum.ToString();

        }

        m_curNum = curNum;
        UpdateConsumeArea();
    }

    void OnClickOk()
    {
        if (null != delOkClick)
        {
            OnInputSubmit();
            delOkClick(m_curNum);
        }
        UIManager.CloseUI(UIInfo.NumChoose);
    }

    void OnClickCancel()
    {
        UIManager.CloseUI(UIInfo.NumChoose);
    }

    // 回车时响应
    public void OnInputSubmit()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(inputNum.value, out curNum);
        if (bCanParse)
        {
            curNum = Mathf.Min(m_maxValue, Mathf.Max(1, curNum));
            inputNum.value = curNum.ToString();
        }
        else
        {
            inputNum.value = "1";
            curNum = 1;
        }

        m_curNum = curNum;
        UpdateConsumeArea();
    }

    void OnClickInput()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(inputNum.value, out curNum);
        if (bCanParse)
        {
            curNum = Mathf.Min(m_maxValue, Mathf.Max(1, curNum));
            if (1 == curNum)
            {
                inputNum.value = "";
            }
        }
    }
}
