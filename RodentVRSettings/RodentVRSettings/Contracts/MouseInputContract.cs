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
	}

	public interface MouseInputPresenterContract
	{
		Contracts.MouseInputViewContract View { set; }

		string MouseADeviceName { set; }

		string MouseBDeviceName { set; }

		float MouseAMultiplier { set; }

		float MouseBMultiplier { set; }

		void Reset();
	}
}
