using RawInput;
using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Contracts
{
	public interface MouseInputViewContract
	{
		string MouseADeviceName { set; }

		string MouseBDeviceName { set; }

		float MouseAMultiplier { set; }

		float MouseBMultiplier { set; }

		RawMouseInput RawMouseInputDevice { get; }

		void Init(ConfigurationSettings settings, IntPtr? hwnd = null);
	}

	public interface MouseInputPresenterContract
	{
		Contracts.MouseInputViewContract View { set; }

		string MouseADeviceName { set; }

		string MouseBDeviceName { set; }

		float MouseAMultiplier { set; }

		float MouseBMultiplier { set; }

		void Init(ConfigurationSettings settings = null);
	}
}
