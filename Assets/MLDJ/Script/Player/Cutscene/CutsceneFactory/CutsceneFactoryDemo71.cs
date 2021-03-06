﻿/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：雷纳堡边缘副本2结束：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo71 : CutsceneFactoryBase
	{
		#region Fields
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		/// <summary>
		/// 用这个Factory创建一个Cutscene
		/// </summary>
		/// <returns>The cutscene.</returns>
		public override Cutscene CreatCutscene ()
		{
			
			BeginBuild();
			
			///////////////////////////////////////////////////////////////////
			/// 定义阶段
			///////////////////////////////////////////////////////////////////

			DefineAction ("HeiBian", new CutsceneActionMovieUIControl ());
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (260),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (261),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (1137, 1.5f), true);
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1, 0), true);	
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "HeiBian");
			StartBWhenAFinish ("CameraMove1", "DuiHua");
			StartBWhenAFinish ("DuiHua", "danchu");
			StartBWhenAFinish ("danchu", "danru");
			StartBWhenAFinish ("danru", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "CameraMove3");
			FinishBWhenAFinish ("CameraMove3", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}