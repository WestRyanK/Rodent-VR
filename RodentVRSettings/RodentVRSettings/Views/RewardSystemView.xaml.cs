using RodentVRSettings.Contracts;
using RodentVRSettings.Models.Configuration;
using RodentVRSettings.Presenters;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace RodentVRSettings.Views
{
	/// <summary>
	/// Interaction logic for RewardSystemView.xaml
	/// </summary>
	public partial class RewardSystemView : UserControl, Contracts.RewardSystemViewContract
	{
		Contracts.RewardSystemPresenterContract Presenter { get; set; }

		public int SelectedIndex
		{
			set
			{
				bool isValidSelection = Presenter.SelectedIndexInRange(value);

				this.toggleRewardTriggerIsEnabledLabel.IsEnabled =
					this.toggleRewardTriggerIsEnabledDescription.IsEnabled =
					this.toggleRewardTriggerIsEnabled.IsEnabled =
					this.nudRewardTriggerDurationLabel.IsEnabled =
					this.nudRewardTriggerDurationDescription.IsEnabled =
					this.nudRewardTriggerDuration.IsEnabled =
					this.ddRewardTriggerRewardLabel.IsEnabled =
					this.ddRewardTriggerRewardDescription.IsEnabled =
					this.ddRewardTriggerReward.IsEnabled = isValidSelection;

				if (isValidSelection)
				{

					this.toggleRewardTriggerIsEnabled.IsChecked = Presenter.CurrentRewardTriggerIsEnabled;
					this.nudRewardTriggerDuration.Value = Presenter.CurrentRewardTriggerDuration;
					this.ddRewardTriggerReward.SelectedItem = Presenter.CurrentRewardTriggerReward;
				}
				else
				{
					this.mazeVisualizer.SelectedIndex = -1;
					this.toggleRewardTriggerIsEnabled.IsChecked = false;
					this.ddRewardTriggerReward.SelectedValue = null;
					this.nudRewardTriggerDuration.Value = null;
				}
			}
		}

		public MazesEnum CurrentMaze
		{
			set
			{
				this.mazeVisualizer.Maze = value;
			}
		}

		public RewardSystemView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings)
		{
			this.Presenter = new RewardSystemPresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init(settings);

			this.SelectedIndex = -1;
		}

		#region Reward 1 Device Name
		private void devicenameReward1_OnDevicePathChanged(object sender, string e)
		{
			Presenter.Reward1DeviceName = devicenameReward1.DevicePath;
		}

		public string Reward1DeviceName
		{
			set
			{
				devicenameReward1.DevicePath = value;
			}
		}
		#endregion

		#region Reward 2 Device Name
		private void devicenameReward2_OnDevicePathChanged(object sender, string e)
		{
			Presenter.Reward2DeviceName = devicenameReward2.DevicePath;
		}

		public string Reward2DeviceName
		{
			set
			{
				devicenameReward2.DevicePath = value;
			}
		}
		#endregion

		public void SetMaterials(MaterialsEnum[] materials)
		{
			for (int i = 0; i < materials.Length; i++)
			{
				this.mazeVisualizer.SetMaterial(i, materials[i]);
			}
		}

		public void SetRewardTriggerIsEnabled(bool isEnabled)
		{
			this.toggleRewardTriggerIsEnabled.IsChecked = isEnabled;
		}

		public void SetRewardTriggerDuration(float duration)
		{
			this.nudRewardTriggerDuration.Value = duration;
		}

		public void SetRewardTriggerReward(int reward)
		{
			this.ddRewardTriggerReward.SelectedItem = reward;
		}

		private void nudRewardTriggerDuration_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			if (Presenter.SelectedIndex != -1)
				this.Presenter.CurrentRewardTriggerDuration = (float)this.nudRewardTriggerDuration.Value;
		}

		private void ddRewardTriggerReward_SelectionChanged(object sender, SelectionChangedEventArgs e)
		{
			if (Presenter.SelectedIndex != -1)
				this.Presenter.CurrentRewardTriggerReward = (int)this.ddRewardTriggerReward.SelectedItem;
		}

		private void mazeVisualizer_OnMazeClicked(object sender, int selectedIndex)
		{
			if (Presenter != null)
				Presenter.SelectedIndex = selectedIndex;
		}

		private void toggleRewardTriggerIsEnabled_IsCheckedChanged(object sender, EventArgs e)
		{
			if (Presenter.SelectedIndex != -1)
				this.Presenter.CurrentRewardTriggerIsEnabled = this.toggleRewardTriggerIsEnabled.IsChecked ?? false;
		}
	}
}
