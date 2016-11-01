//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SceneFightPos
{ private const string TAB_FILE_DATA = "Tables/SceneFightPos.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SCENEID=2,
ID_TARGETPOSX,
ID_TARGETPOSZ,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_SceneID;
 public int SceneID { get{ return m_SceneID;}}

private float m_TargetPosX;
 public float TargetPosX { get{ return m_TargetPosX;}}

private float m_TargetPosZ;
 public float TargetPosZ { get{ return m_TargetPosZ;}}

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
 Tab_SceneFightPos _values = new Tab_SceneFightPos();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_SceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID] as string);
_values.m_TargetPosX =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSX] as string );
_values.m_TargetPosZ =  Convert.ToSingle(valuesList[(int)_ID.ID_TARGETPOSZ] as string );

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

