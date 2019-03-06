using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Presenters
{
	public class InitialMazePresenter : Contracts.InitialMazePresenterContract
	{
		public Contracts.InitialMazeViewContract View { get; set; }

		#region InitialMaze 
		public MazesEnum InitialMaze
		{
			get
			{
				return settings.InitialMaze;
			}
			set
			{
				if (InitialMaze != value)
				{
					settings.InitialMaze = value;
					View.InitialMaze = value;
				}
			}
		}
		#endregion

		#region Settings Property
		private ConfigurationSettings settings;

		public ConfigurationSettings Settings
		{
			get { return settings; }
			set { settings = value; }
		}
		#endregion

		public InitialMazePresenter(ConfigurationSettings settings)
		{
			this.Settings = settings;
		}
		public void Init()
		{
			View.InitialMaze = this.InitialMaze;
		}
}
}
