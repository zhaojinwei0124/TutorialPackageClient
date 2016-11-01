﻿/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-11-21
 *
 *	功能说明：血色冰封副本3第二阶段结束：废弃中
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo48 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (186),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (82f, 18.79f, 6.21f), 0));
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (179, 2f), true);
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1, 0), true);
			
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "HeiBian");
			StartBWhenAStart ("CameraMove1", "PlayerMove0", 0.5f);
			StartBWhenAFinish ("CameraMove1", "DuiHua");
			StartBWhenAFinish ("DuiHua", "CameraMove3");
			FinishBWhenAStart ("CameraMove3", "HeiBian");
			EndBuild();

			return base.CreatCutscene ();
		}
		#endregion
	}
}