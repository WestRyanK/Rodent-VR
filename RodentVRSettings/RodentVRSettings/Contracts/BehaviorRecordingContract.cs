using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Contracts
{
	public interface BehaviorRecordingViewContract
	{
		string BehaviorRecordingFileName { set; }

		void Init(ConfigurationSettings settings);
	}

	public interface BehaviorRecordingPresenterContract
	{
		Contracts.BehaviorRecordingViewContract View { set; }

		string BehaviorRecordingFileName { set; }

		void Init(ConfigurationSettings settings = null);
	}
}
