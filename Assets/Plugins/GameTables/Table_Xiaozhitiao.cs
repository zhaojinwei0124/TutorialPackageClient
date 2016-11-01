//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Xiaozhitiao
{ private const string TAB_FILE_DATA = "Tables/Xiaozhitiao.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CONTENT=2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_Content;
 public string Content { get{ return m_Content;}}

private string m_Id;
 public string Id { get{ return m_Id;}}

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
 Tab_Xiaozhitiao _values = new Tab_Xiaozhitiao();
 _values.m_Content =  valuesList[(int)_ID.ID_CONTENT] as string;
_values.m_Id =  valuesList[(int)_ID.ID_ID] as string;

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

