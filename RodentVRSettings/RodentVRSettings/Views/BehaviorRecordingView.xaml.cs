using Microsoft.Win32;
using RodentVRSettings.Models.Configuration;
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
	/// Interaction logic for BehaviorRecordingView.xaml
	/// </summary>
	public partial class BehaviorRecordingView : UserControl, Contracts.BehaviorRecordingViewContract
	{
		Contracts.BehaviorRecordingPresenterContract Presenter { get; set; }

		public BehaviorRecordingView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings)
		{
			this.Presenter = new Presenters.BehaviorRecordingPresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init();
		}

		#region Behavior Recording File Name
		private void tbBehaviorRecordingFileName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.BehaviorRecordingFileName = tbBehaviorRecordingFileName.Text;
		}

		public string BehaviorRecordingFileName
		{
			set
			{
				tbBehaviorRecordingFileName.Text = value;
			}
		}

		private void bttnBehaviorRecordingFileName_Click(object sender, RoutedEventArgs e)
		{
			SaveFileDialog saveRecordFileDialog = new SaveFileDialog();
			saveRecordFileDialog.AddExtension = true;
			saveRecordFileDialog.Filter = "Text File (*.txt)|*.txt|All Files|*.*";
			saveRecordFileDialog.DefaultExt = "*.txt";
			bool? result = saveRecordFileDialog.ShowDialog();
			if (result == true)
			{
				BehaviorRecordingFileName = saveRecordFileDialog.FileName;
			}
		}
		#endregion
	}
}
