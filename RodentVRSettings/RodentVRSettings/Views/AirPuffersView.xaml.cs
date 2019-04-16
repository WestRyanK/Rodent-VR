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
		private void devicenameAirPufferLeft_OnDevicePathChanged(object sender, string e)
		{
			Presenter.AirPufferLeftDeviceName = devicenameAirPufferLeft.DevicePath;
		}

		public string AirPufferLeftDeviceName
		{
			set
			{
				devicenameAirPufferLeft.DevicePath = value;
			}
		}
		#endregion

		#region Air Puffer Right Device Name
		private void devicenameAirPufferRight_OnDevicePathChanged(object sender, string e)
		{
			Presenter.AirPufferRightDeviceName = devicenameAirPufferRight.DevicePath;
		}

		public string AirPufferRightDeviceName
		{
			set
			{
				devicenameAirPufferRight.DevicePath = value;
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
