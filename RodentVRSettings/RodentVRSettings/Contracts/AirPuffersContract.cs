using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Contracts
{
	public interface AirPuffersViewContract
	{
		string AirPufferLeftDeviceName { set; }

		string AirPufferRightDeviceName { set; }

		float AirPufferFrontAngle { set; }

		void Init(ConfigurationSettings settings);
	}

	public interface AirPuffersPresenterContract
	{
		Contracts.AirPuffersViewContract View { set; }

		string AirPufferLeftDeviceName { set; }

		string AirPufferRightDeviceName { set; }

		float AirPufferFrontAngle { set; }

		void Init();
	}
}
