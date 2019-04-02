using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using RodentVRSettings.Contracts;
using RodentVRSettings.Models.Configuration;

namespace RodentVRSettings.Presenters
{
	public class AirPuffersPresenter : Contracts.AirPuffersPresenterContract
	{
		public AirPuffersViewContract View { get; set; }

		#region AirPufferLeftDeviceName Property
		public string AirPufferLeftDeviceName
		{
			get
			{
				return settings.AirPuffLeftDeviceName;
			}
			set
			{
				if (AirPufferLeftDeviceName != value)
				{
					settings.AirPuffLeftDeviceName = value;
					View.AirPufferLeftDeviceName = value;
				}
			}
		}
		#endregion

		#region AirPufferRightDeviceName Property
		public string AirPufferRightDeviceName
		{
			get
			{
				return settings.AirPuffRightDeviceName;
			}
			set
			{
				if (AirPufferRightDeviceName != value)
				{
					settings.AirPuffRightDeviceName = value;
					View.AirPufferRightDeviceName = value;
				}
			}
		}
		#endregion

		#region AirPufferFrontAngle Property
		public float AirPufferFrontAngle
		{
			get
			{
				return settings.AirPufferFrontAngle;
			}
			set
			{
				if (AirPufferFrontAngle != value)
				{
					settings.AirPufferFrontAngle = value;
					View.AirPufferFrontAngle = value;
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

		public AirPuffersPresenter(ConfigurationSettings settings)
		{
			this.Settings = settings;
		}

		public void Init(ConfigurationSettings settings = null)
		{
			if (settings != null)
				this.Settings = settings;

			View.AirPufferFrontAngle = this.AirPufferFrontAngle;
			View.AirPufferLeftDeviceName = this.AirPufferLeftDeviceName;
			View.AirPufferRightDeviceName = this.AirPufferRightDeviceName;
		}
	}
}
