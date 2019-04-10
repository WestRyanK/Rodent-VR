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

		const int REWARD_TRIGGER_OFFSET = 4;

		#region SelectedIndex Property
		private int selectedIndex;

		public int SelectedIndex
		{
			get { return selectedIndex; }
			set
			{
				if (SelectedIndex != value)
				{
					selectedIndex = value;
					View.SelectedIndex = value;
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

		public RewardSystemPresenter(ConfigurationSettings settings)
		{
			this.Settings = settings;
			this.Settings.PropertyChanged += this.Settings_PropertyChanged;
		}

		private void Settings_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
		{
			if (e.PropertyName == nameof(this.Settings.InitialMaze))
			{
				Init();
			}
		}

		public void Init(ConfigurationSettings settings = null)
		{
			if (settings != null)
				this.Settings = settings;

			View.CurrentMaze = this.Settings.InitialMaze;

			var materials = this.Settings.GetMaterials(this.Settings.InitialMaze);
			View.SetMaterials(materials);
		}

		public bool SelectedIndexInRange(int value)
		{
			if (this.Settings.InitialMaze == MazesEnum.maze_01_level)
				value -= REWARD_TRIGGER_OFFSET;

			return (value >= 0 && value < this.Settings.GetRewardTriggers(this.Settings.InitialMaze).Length);
		}

		private RewardTrigger GetRewardTrigger()
		{
			var rewards = this.Settings.GetRewardTriggers(this.Settings.InitialMaze);
			int index;
			switch (this.Settings.InitialMaze)
			{
				case MazesEnum.maze_01_level:
					index = this.SelectedIndex - REWARD_TRIGGER_OFFSET;
					break;
				case MazesEnum.maze_02_level:
					index = this.SelectedIndex;
					break;
				default:
					throw new Exception("Please update me!");
			}

		return rewards[index];
		}

		#region CurrentRewardTriggerDuration Property
		public float CurrentRewardTriggerDuration
		{
			get
			{
				if (this.SelectedIndex < 0)
					return 0;
				var reward = this.GetRewardTrigger();
				return reward.Duration;

			}
			set
			{
				if (this.SelectedIndex >= 0)
				{
					var reward = this.GetRewardTrigger();
					reward.Duration = value;
					View.SetRewardTriggerDuration(value);
				}
			}
		}
		#endregion

		#region CurrentRewardTriggerReward Property
		public int CurrentRewardTriggerReward
		{
			get
			{
				if (this.SelectedIndex < 0)
					return 0;
				var reward = this.GetRewardTrigger();
				return reward.Reward;
			}
			set
			{
				if (this.SelectedIndex >= 0)
				{
					var reward = this.GetRewardTrigger();
					reward.Reward = value;
					View.SetRewardTriggerReward(value);
				}
			}
		}
		#endregion

		#region CurrentRewardTriggerIsEnabled Property
		public bool CurrentRewardTriggerIsEnabled
		{
			get
			{
				if (this.SelectedIndex < 0)
					return false;
				var reward = this.GetRewardTrigger();
				return reward.IsEnabled;
			}
			set
			{
				if (this.SelectedIndex >= 0)
				{
					var reward = this.GetRewardTrigger();
					reward.IsEnabled = value;
					View.SetRewardTriggerIsEnabled(value);
				}
			}
		}
		#endregion
	}
}
