using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Presenters
{
	public class BehaviorRecordingPresenter : Contracts.BehaviorRecordingPresenterContract
	{
		public Contracts.BehaviorRecordingViewContract View { get; set; }

		#region BehaviorRecordingFileName Property
		public string BehaviorRecordingFileName
		{
			get
			{
				return settings.BehaviorRecordingFileName;
			}
			set
			{
				if (BehaviorRecordingFileName != value)
				{
					settings.BehaviorRecordingFileName = value;
					View.BehaviorRecordingFileName = value;
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

		public BehaviorRecordingPresenter(ConfigurationSettings settings)
		{
			this.Settings = settings;
		}

		public void Init(ConfigurationSettings settings = null)
		{
			if (settings != null)
				this.Settings = settings;

			View.BehaviorRecordingFileName = this.BehaviorRecordingFileName;
		}
	}
}
