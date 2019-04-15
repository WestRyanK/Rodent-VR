﻿using System;
using System.Windows;
using System.Windows.Interop;
using MahApps.Metro.Controls;
using MahApps.Metro.Controls.Dialogs;
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
			}
		}

		protected override async void OnSourceInitialized(EventArgs e)
		{
			base.OnSourceInitialized(e);
			await DisplayWelcomeMessageAsync();
			InitMouseInput();
			InitPresenters();
		}

		private void InitPresenters()
		{
			viewRewardSystem.Init(this.settings);
			viewAirPuffers.Init(this.settings);
			viewBehaviorRecording.Init(this.settings);
			viewMaterials.Init(this.settings);
			viewInitialMaze.Init(this.settings);
		}

		private async System.Threading.Tasks.Task DisplayWelcomeMessageAsync()
		{
			do
			{
				MetroDialogSettings dialogSettings = new MetroDialogSettings();
				dialogSettings.AffirmativeButtonText = "Create New";
				dialogSettings.NegativeButtonText = "Open Existing";
				var result = await this.ShowMessageAsync("Get Started", "Do you want to create a new settings file or open an existing one?", MessageDialogStyle.AffirmativeAndNegative, dialogSettings);

				if (result == MessageDialogResult.Negative)
				{
					var settings = OpenConfig();
					this.settings = settings;
				}
				else
				{
					this.settings = new ConfigurationSettings();
				}
			}
			while (this.settings == null);
		}

		private void InitMouseInput()
		{
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

		private ConfigurationSettings OpenConfig()
		{
			OpenFileDialog openConfigFileDialog = new OpenFileDialog();
			bool? result = ShowConfigDialog(openConfigFileDialog);
			if (result == true)
			{
				var configFileName = openConfigFileDialog.FileName;
				var settings = ConfigurationSettings.Read(configFileName);
				return settings;
			}
			return null;
		}

		private void menuitemOpen_Click(object sender, System.Windows.RoutedEventArgs e)
		{
			var settings = OpenConfig();

			if (settings != null)
			{
				this.settings = settings;
				InitPresenters();
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

		private async void menuitemNew_Click(object sender, RoutedEventArgs e)
		{
			var result = await this.ShowMessageAsync("New Configuration", "Are you sure you want to open a new configuration file? This will erase any unsaved changes.");
			if (result == MessageDialogResult.Affirmative)
			{
				this.settings = new ConfigurationSettings();
				InitPresenters();
			}
		}
	}
}
