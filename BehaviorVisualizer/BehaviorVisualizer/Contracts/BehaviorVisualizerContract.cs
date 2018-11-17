
using BehaviorVisualizer.Models;

namespace BehaviorVisualizer.Contracts
{
	public interface BehaviorVisualizerViewContract
	{
		Models.BehaviorVisualizationRendererSettings.PathStyleEnum PathStyle { set; }

		float PathWorldWidth { set; }

		float PixelsPerWorldUnit { set; }

		Vector ImageOriginWorldPosition { set; }

		float ImageWorldWidth { set; }

		float ImageWorldHeight { set; }

		string OpenRecordFileName { set; }

		string SaveFileName { set; }
	}

	public interface BehaviorVisualizerPresenterContract
	{
		Contracts.BehaviorVisualizerViewContract View { set; }
		
		Models.BehaviorVisualizationRendererSettings.PathStyleEnum PathStyle { set; }

		float PathWorldWidth { set; }

		float PixelsPerWorldUnit { set; }

		Vector ImageOriginWorldPosition { set; }

		float ImageWorldWidth { set; }

		float ImageWorldHeight { set; }

		string OpenRecordFileName { set; }

		string SaveFileName { set; }

		void Save();

		void Reset();
	}
}
