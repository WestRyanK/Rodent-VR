using RawInput;
using RodentVRSettings.Models.Configuration;
using RodentVRSettings.Presenters;
using System;
using System.Collections.Generic;
using System.Diagnostics;
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
	/// Interaction logic for MouseInputView.xaml
	/// </summary>
	public partial class MouseInputView : UserControl, Contracts.MouseInputViewContract
	{
		Contracts.MouseInputPresenterContract Presenter { get; set; }

		public MouseInputView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings, IntPtr hwnd)
		{
			this.Presenter = new MouseInputPresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init();

			createRawInputDevice(hwnd);
		}

		#region Mouse A Device Name
		private void tbMouseADeviceName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.MouseADeviceName = tbMouseADeviceName.Text;
		}

		public string MouseADeviceName
		{
			set
			{
				tbMouseADeviceName.Text = value;
			}
		}
		#endregion

		#region Mouse B Device Name
		private void tbMouseBDeviceName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.MouseBDeviceName = tbMouseBDeviceName.Text;
		}

		public string MouseBDeviceName
		{
			set
			{
				tbMouseBDeviceName.Text = value;
			}
		}
		#endregion

		#region Mouse A Multiplier
		private void nudMouseAMultiplier_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.MouseAMultiplier = (float)nudMouseAMultiplier.Value;
		}

		public float MouseAMultiplier
		{
			set
			{
				nudMouseAMultiplier.Value = value;
			}
		}
		#endregion

		#region Mouse B Multiplier
		private void nudMouseBMultiplier_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.MouseBMultiplier = (float)nudMouseBMultiplier.Value;
		}

		public float MouseBMultiplier
		{
			set
			{
				nudMouseBMultiplier.Value = value;
			}
		}

		#endregion

		#region Raw Mouse Input Device
		private RawMouseInput rawMouseInputDevice;

		public RawMouseInput RawMouseInputDevice
		{
			get
			{
				return this.rawMouseInputDevice;
			}
		}
		#endregion

		private RawMouseInputEventArg lastMouseEvent;

		private void createRawInputDevice(IntPtr hwnd)
		{
			this.rawMouseInputDevice = new RawMouseInput(hwnd, false);
			this.rawMouseInputDevice.AddMessageFilter();
			this.rawMouseInputDevice.MouseEvent += this.MouseInput_MouseEvent;
		}

		private void MouseInput_MouseEvent(object sender, RawMouseInputEventArg e)
		{
			Debug.Print(e.MouseEvent.ToString());
			this.lastMouseEvent = e;
		}

		private void bttnMouse_Click(object sender, RoutedEventArgs e)
		{
			string deviceName = this.lastMouseEvent.MouseEvent.DeviceName;

			// Before:
			// "\\?\HID#VID_045E&PID_0039#6&223a925f&1&0000#{378de44c-56ef-11d1-bc8c-00a0c91405dd}"
			// After:
			// "HID\VID_045E&PID_0039\6&223a925f&1&0000"
			var match = Regex.Match(deviceName, ".{4}(.+)#{");
			deviceName = match.Groups[1].Value.Replace('#', '\\'); ;
			
	
			if (sender == this.bttnMouseA)
			{
				this.MouseADeviceName = deviceName;
			}
			else if (sender == this.bttnMouseB)
			{
				this.MouseBDeviceName = deviceName;
			}
		}
	}
}
