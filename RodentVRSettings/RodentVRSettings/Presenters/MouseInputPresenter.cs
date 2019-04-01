using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using RawInput;

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

		public void Init(ConfigurationSettings settings = null)
		{
			if (settings != null)
				this.Settings = settings;

			View.MouseADeviceName = this.MouseADeviceName;
			View.MouseBDeviceName = this.MouseBDeviceName;
			View.MouseAMultiplier = this.MouseAMultiplier;
			View.MouseBMultiplier = this.MouseBMultiplier;
		}

	}
}
