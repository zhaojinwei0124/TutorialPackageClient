//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_OnlineTimeRankReward
{ private const string TAB_FILE_DATA = "Tables/OnlineTimeRankReward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_INDEX,
ID_POSMIN=2,
ID_POSMAX,
ID_TITLEID,
ID_MONEY,
ID_BINDYUANBAO,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindYuanBao;
 public int BindYuanBao { get{ return m_BindYuanBao;}}

private int m_Index;
 public int Index { get{ return m_Index;}}

private int m_Money;
 public int Money { get{ return m_Money;}}

private int m_PosMax;
 public int PosMax { get{ return m_PosMax;}}

private int m_PosMin;
 public int PosMin { get{ return m_PosMin;}}

private int m_TitleId;
 public int TitleId { get{ return m_TitleId;}}

public static bool LoadTable(Dictionary<int, List<object> > _tab)
 {
 if(!TableManager.ReaderPList(GetInstanceFile(),SerializableTable,_tab))
 {
 throw TableException.ErrorReader("Load File{0} Fail!!!",GetInstanceFile());
 }
 return true;
 }
 public static void SerializableTable(string[] valuesList,int skey,Dictionary<int, List<object> > _hash)
 {
 if ((int)_ID.MAX_RECORD!=valuesList.Length)
 {
 throw TableException.ErrorReader("Load {0} error as CodeSize:{1} not Equal DataSize:{2}", GetInstanceFile(),_ID.MAX_RECORD,valuesList.Length);
 }
 Tab_OnlineTimeRankReward _values = new Tab_OnlineTimeRankReward();
 _values.m_BindYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDYUANBAO] as string);
_values.m_Index =  Convert.ToInt32(valuesList[(int)_ID.ID_INDEX] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_PosMax =  Convert.ToInt32(valuesList[(int)_ID.ID_POSMAX] as string);
_values.m_PosMin =  Convert.ToInt32(valuesList[(int)_ID.ID_POSMIN] as string);
_values.m_TitleId =  Convert.ToInt32(valuesList[(int)_ID.ID_TITLEID] as string);

 if (_hash.ContainsKey(skey))
 {
 List< object> tList =_hash[skey];
 tList.Add(_values);
 }
 else
 {
 List<object> tList = new List<object>();
 tList.Add(_values); 
 _hash.Add(skey, (List<object>)tList);
 }
 }


}
}

