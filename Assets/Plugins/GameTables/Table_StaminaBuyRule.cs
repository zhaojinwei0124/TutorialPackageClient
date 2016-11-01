//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StaminaBuyRule
{ private const string TAB_FILE_DATA = "Tables/StaminaBuyRule.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BUYNUMMAX=2,
ID_VIPREQUIRE,
ID_PRICE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BuyNumMax;
 public int BuyNumMax { get{ return m_BuyNumMax;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Price;
 public int Price { get{ return m_Price;}}

private int m_VIPRequire;
 public int VIPRequire { get{ return m_VIPRequire;}}

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
 Tab_StaminaBuyRule _values = new Tab_StaminaBuyRule();
 _values.m_BuyNumMax =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYNUMMAX] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Price =  Convert.ToInt32(valuesList[(int)_ID.ID_PRICE] as string);
_values.m_VIPRequire =  Convert.ToInt32(valuesList[(int)_ID.ID_VIPREQUIRE] as string);

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

