using System;
using System.Windows;
using System.Windows.Interop;
using MahApps.Metro.Controls;
using Microsoft.Win32;
using RodentVRSettings.Models.Configuration;

namespace RodentVRSettings
{
	/// <summary>
	/// Interaction logic for MainWindow.xaml
	/// </summary>
	public partial class MainWindow : MetroWindow
	{
		private ConfigurationSettings settings;

		public MainWindow()
		{
			InitializeComponent();

			this.settings = new ConfigurationSettings();

			viewRewardSystem.Init(this.settings);
			viewAirPuffers.Init(this.settings);
			viewBehaviorRecording.Init(this.settings);
			viewMaterials.Init(this.settings);
			viewInitialMaze.Init(this.settings);
		}

		protected override void OnSourceInitialized(EventArgs e)
		{
			base.OnSourceInitialized(e);
			viewMouseInput.Init(this.settings, this.CriticalHandle);
			HwndSource source = HwndSource.FromHwnd(this.CriticalHandle);
			source.AddHook(new HwndSourceHook(viewMouseInput.RawMouseInputDevice.WndProc));
		}

		private void menuitemOpen_Click(object sender, System.Windows.RoutedEventArgs e)
		{
			OpenFileDialog openConfigFileDialog = new OpenFileDialog();
			openConfigFileDialog.AddExtension = true;
			openConfigFileDialog.FileName = "Game.ini";
			openConfigFileDialog.Filter = "Configuration File (Game.ini)|Game.ini";
			openConfigFileDialog.DefaultExt = "*.ini";
			bool? result = openConfigFileDialog.ShowDialog();
			if (result == true)
			{
				var configFileName = openConfigFileDialog.FileName;
				this.settings = ConfigurationSettings.Read(configFileName);

				viewRewardSystem.Init(this.settings);
				viewAirPuffers.Init(this.settings);
				viewBehaviorRecording.Init(this.settings);
				viewMaterials.Init(this.settings);
				viewMouseInput.Init(this.settings);
				viewInitialMaze.Init(this.settings);
			}
		}

		private void menuitemSave_Click(object sender, System.Windows.RoutedEventArgs e)
		{
			SaveFileDialog saveConfigFileDialog = new SaveFileDialog();
			saveConfigFileDialog.AddExtension = true;
			saveConfigFileDialog.FileName = "Game.ini";
			saveConfigFileDialog.Filter = "Configuration File (Game.ini)|Game.ini";
			saveConfigFileDialog.DefaultExt = "*.ini";
			bool? result = saveConfigFileDialog.ShowDialog();
			if (result == true)
			{
				var configFileName = saveConfigFileDialog.FileName;
				ConfigurationSettings.Save(configFileName, this.settings);
			}
		}
	}
}
