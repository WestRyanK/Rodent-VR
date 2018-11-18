
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

		System.Drawing.Color PathColor { set; }

		System.Drawing.Color BackgroundColor { set; }

		//System.Drawing.Bitmap BackgroundImage { set; }
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

		System.Drawing.Color PathColor { set; }

		System.Drawing.Color BackgroundColor { set; }

		System.Drawing.Bitmap BackgroundImage { set; }

		void Save();

		void Reset();
	}
}
