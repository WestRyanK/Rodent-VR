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
	/// Interaction logic for AirPuffersView.xaml
	/// </summary>
	public partial class AirPuffersView : UserControl, Contracts.AirPuffersViewContract
	{
		Contracts.AirPuffersPresenterContract Presenter { get; set; }

		public AirPuffersView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings)
		{
			this.Presenter = new AirPuffersPresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init();
		}

		#region Air Puffer Left Device Name
		private void tbAirPufferLeftDeviceName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.AirPufferLeftDeviceName = tbAirPufferLeftDeviceName.Text;
		}

		public string AirPufferLeftDeviceName
		{
			set
			{
				tbAirPufferLeftDeviceName.Text = value;
			}
		}
		#endregion

		#region Air Puffer Right Device Name
		private void tbAirPufferRightDeviceName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.AirPufferRightDeviceName = tbAirPufferRightDeviceName.Text;
		}

		public string AirPufferRightDeviceName
		{
			set
			{
				tbAirPufferRightDeviceName.Text = value;
			}
		}
		#endregion

		#region Air Puffer Front Angle
		private void nudAirPufferFrontAngle_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.AirPufferFrontAngle = (float)nudAirPufferFrontAngle.Value;
		}

		public float AirPufferFrontAngle
		{
			set
			{
				nudAirPufferFrontAngle.Value = value;
			}
		}
		#endregion
	}
}
