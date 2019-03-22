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

		public void Init()
		{
			View.CurrentMaze = this.Settings.InitialMaze;

			var materials = this.Settings.GetMaterials(this.Settings.InitialMaze);
			View.SetMaterials(materials);
		}

		public bool SelectedIndexInRange(int value)
		{
			return (value >= 0 && value < this.Settings.GetRewardTriggers(this.Settings.InitialMaze).Length);
		}

		#region CurrentRewardTriggerDuration Property
		public float CurrentRewardTriggerDuration
		{
			get
			{
				if (this.SelectedIndex < 0)
					return 0;
				var rewards = this.Settings.GetRewardTriggers(this.Settings.InitialMaze);
				return rewards[this.SelectedIndex].Duration;
			}
			set
			{
				if (this.SelectedIndex >= 0)
				{
					var rewards = this.Settings.GetRewardTriggers(this.Settings.InitialMaze);
					rewards[this.SelectedIndex].Duration = value;
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
				var rewards = this.Settings.GetRewardTriggers(this.Settings.InitialMaze);
				return rewards[this.SelectedIndex].Reward;
			}
			set
			{
				if (this.SelectedIndex >= 0)
				{
					var rewards = this.Settings.GetRewardTriggers(this.Settings.InitialMaze);
					rewards[this.SelectedIndex].Reward = value;
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
				var rewards = this.Settings.GetRewardTriggers(this.Settings.InitialMaze);
				return rewards[this.SelectedIndex].IsEnabled;
			}
			set
			{
				if (this.SelectedIndex >= 0)
				{
					var rewards = this.Settings.GetRewardTriggers(this.Settings.InitialMaze);
					rewards[this.SelectedIndex].IsEnabled = value;
					View.SetRewardTriggerIsEnabled(value);
				}
			}
		}
		#endregion
	}
}
