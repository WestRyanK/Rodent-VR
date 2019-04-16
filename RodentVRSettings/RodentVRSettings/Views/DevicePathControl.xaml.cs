using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
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
	/// Interaction logic for DeviceName.xaml
	/// </summary>
	public partial class DevicePathControl : UserControl
	{

		private const string DEVICE_PATH_REGEX = @"(.*)/(.*)/(.*)";
		private const string DEVICE_PATH_TEMPLATE = @"{0}/{1}/{2}";

		public event EventHandler<string> OnDevicePathChanged;

		#region DevicePath
		public string DevicePath
		{
			get { return (string)GetValue(DevicePathProperty); }
			set { SetValue(DevicePathProperty, value); }
		}

		// Using a DependencyProperty as the backing store for DevicePath.  This enables animation, styling, binding, etc...
		public static readonly DependencyProperty DevicePathProperty =
			DependencyProperty.Register("DevicePath", typeof(string), typeof(DevicePathControl), new PropertyMetadata(string.Empty, DevicePathChanged));
		#endregion

		private static void DevicePathChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
		{
			var control = d as DevicePathControl;
			var match = Regex.Match(control.DevicePath, DEVICE_PATH_REGEX);
			if (match.Groups.Count != 4)
				throw new ArgumentException("DevicePath was not in proper format");

			control.tbName.Text = match.Groups[1].Value;
			control.tbPort.Text = match.Groups[2].Value;
			control.tbLine.Text = match.Groups[3].Value;

			control.OnDevicePathChanged?.Invoke(control, control.DevicePath);
		}

		public DevicePathControl()
		{
			InitializeComponent();
		}

		private void updateDevicePath()
		{
			this.DevicePath = String.Format(DEVICE_PATH_TEMPLATE, this.tbName.Text, this.tbPort.Text, this.tbLine.Text);
		}

		private void tbName_TextChanged(object sender, TextChangedEventArgs e)
		{
			updateDevicePath();
		}

		private void tbPort_TextChanged(object sender, TextChangedEventArgs e)
		{
			updateDevicePath();
		}

		private void tbLine_TextChanged(object sender, TextChangedEventArgs e)
		{
			updateDevicePath();
		}
	}
}
