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

		private const string DEFAULT_EXTENSION = ".ini";
		private const string DEFAULT_FILENAME = "Game" + DEFAULT_EXTENSION;

		public MainWindow()
		{
			InitializeComponent();

			try
			{
				var configFileName = System.IO.Path.Combine(GetInitialDirectory(), DEFAULT_FILENAME);
				this.settings = ConfigurationSettings.Read(configFileName);
			}
			catch (Exception e)
			{
				MessageBox.Show("The current configuration file could not be found.\nDefault configuration settings will be used.");
				this.settings = new ConfigurationSettings();
			}


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

		private string GetInitialDirectory()
		{
			var directory = System.IO.Path.Combine(
				Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData),
				"rodent_vr", "Saved", "Config", "WindowsNoEditor");

			return directory;
		}

		private bool? ShowConfigDialog(FileDialog dialog)
		{
			dialog.AddExtension = true;
			dialog.FileName = DEFAULT_FILENAME;
			dialog.Filter = "Configuration File|" + DEFAULT_FILENAME;
			dialog.DefaultExt = "*" + DEFAULT_EXTENSION;
			dialog.InitialDirectory = GetInitialDirectory();
			var result = dialog.ShowDialog();
			return result;
		}

		private void menuitemOpen_Click(object sender, System.Windows.RoutedEventArgs e)
		{
			OpenFileDialog openConfigFileDialog = new OpenFileDialog();
			bool? result = ShowConfigDialog(openConfigFileDialog);
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
			bool? result = ShowConfigDialog(saveConfigFileDialog);
			if (result == true)
			{
				var configFileName = saveConfigFileDialog.FileName;
				ConfigurationSettings.Save(configFileName, this.settings);
			}
		}
	}
}
