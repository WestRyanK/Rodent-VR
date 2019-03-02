using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Presenters
{
	public class MouseInputPresenter : Contracts.MouseInputPresenterContract
	{
		public Contracts.MouseInputViewContract View { get; set; }

		#region MouseADeviceName 
		public string MouseADeviceName
		{
			get
			{
				return settings.MouseADeviceName;
			}
			set
			{
				if (MouseADeviceName != value)
				{
					settings.MouseADeviceName = value;
					View.MouseADeviceName = value;
				}
			}
		}
		#endregion

		#region MouseBDeviceName
		public string MouseBDeviceName
		{
			get
			{
				return settings.MouseBDeviceName;
			}
			set
			{
				if (MouseBDeviceName != value)
				{
					settings.MouseBDeviceName = value;
					View.MouseBDeviceName = value;
				}
			}
		}
		#endregion

		#region MouseAMultiplier
		public float MouseAMultiplier
		{
			get
			{
				return settings.MouseAMultiplier;
			}
			set
			{
				if (MouseAMultiplier != value)
				{
					settings.MouseAMultiplier = value;
					View.MouseAMultiplier = value;
				}
			}
		}
		#endregion

		#region MouseBMultiplier
		public float MouseBMultiplier
		{
			get
			{
				return settings.MouseBMultiplier;
			}
			set
			{
				if (MouseBMultiplier != value)
				{
					settings.MouseBMultiplier = value;
					View.MouseBMultiplier = value;
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

		public MouseInputPresenter(ConfigurationSettings settings)
		{
			this.Settings = settings;
		}
		public void Reset()
		{
			this.MouseADeviceName = @"HID\VID_0461&PID_4D15\6&31D2D65F&0&0000";
			this.MouseBDeviceName = @"HID\VID_046D&PID_C016\6&D2A8B0A&0&0000";
			this.MouseAMultiplier = -0.05f;
			this.MouseBMultiplier = 0.025f;
		}
}
}
