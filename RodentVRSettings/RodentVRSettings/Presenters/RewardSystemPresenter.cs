using RodentVRSettings.Contracts;
using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Presenters
{
	public class RewardSystemPresenter : Contracts.RewardSystemPresenterContract
	{
		public RewardSystemViewContract View { get; set; }

		void RewardSystemPresenterContract.SetRewardTrigger(MazesEnum maze, int triggerIndex, RewardTrigger trigger)
		{
			RewardTrigger[] triggers;
			switch (maze)
			{
				case MazesEnum.maze_01_level:
					triggers = this.Settings.Maze01Triggers;
					break;
				case MazesEnum.maze_02_level:
					triggers = this.Settings.Maze02Triggers;
					break;
				default:
					throw new Exception("update switch plz!");
			}

			triggers[triggerIndex] = trigger;
		}


		#region Settings Property
		private ConfigurationSettings settings;

		public ConfigurationSettings Settings
		{
			get { return settings; }
			set { settings = value; }
		}

		RewardSystemViewContract RewardSystemPresenterContract.View { set => throw new NotImplementedException(); }
		#endregion

		public RewardSystemPresenter(ConfigurationSettings settings)
		{
			this.Settings = settings;
		}

		public void Init()
		{
			View.Maze01RewardTriggers = this.Maze01RewardTriggers;
			View.Maze02RewardTriggers = this.Maze02RewardTriggers;
		}

	}
}
