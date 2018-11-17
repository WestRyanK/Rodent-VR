using BehaviorVisualizer.Models;

namespace BehaviorVisualizer.Presenters
{
	class BehaviorVisualizerPresenter : Contracts.BehaviorVisualizerPresenterContract
	{
		public Contracts.BehaviorVisualizerViewContract View { get; set; }

		#region Settings
		private BehaviorVisualizationRendererSettings settings;

		public BehaviorVisualizationRendererSettings Settings
		{
			get { return settings; }
			set { settings = value; }
		}
		#endregion

		public BehaviorVisualizerPresenter()
		{
			this.Settings = new BehaviorVisualizationRendererSettings();
		}

		public void Reset()
		{
			this.PathWorldWidth = 10.0f;
			this.PathStyle = BehaviorVisualizationRendererSettings.PathStyleEnum.Dots;
			this.ImageWorldHeight = 1200;
			this.ImageWorldWidth = 1200;
			this.ImageOriginWorldPosition = new Vector(-600, -1000, 0);
			this.PixelsPerWorldUnit = 800;
			this.OpenRecordFileName = @"C:\Users\Ryan\Downloads\BehavioralRecording.txt";
			this.SaveFileName = @"C:\Users\Ryan\Downloads\Test.png";
		}

		public BehaviorVisualizationRendererSettings.PathStyleEnum PathStyle
		{
			get
			{
				return this.settings.PathStyle;
			}
			set
			{
				if (PathStyle != value)
				{
					this.settings.PathStyle = value;
					View.PathStyle = value;
				}
			}
		}

		public float PathWorldWidth
		{
			get
			{
				return this.settings.PathWorldWidth;
			}
			set
			{
				if (PathWorldWidth != value)
				{
					this.settings.PathWorldWidth = value;
					View.PathWorldWidth = value;
				}
			}
		}

		public float PixelsPerWorldUnit
		{
			get
			{
				return this.settings.PixelsPerWorldUnit;
			}
			set
			{
				if (PixelsPerWorldUnit != value)
				{
					this.settings.PixelsPerWorldUnit = value;
					View.PixelsPerWorldUnit = value;
				}
			}
		}

		private string saveFileName;

		public string SaveFileName
		{
			get
			{
				return saveFileName;
			}
			set
			{
				if (saveFileName != value)
				{
					saveFileName = value;
					View.SaveFileName = value;
				}
			}
		}

		private string openRecordFileName;

		public string OpenRecordFileName
		{
			get
			{
				return openRecordFileName;
			}
			set
			{
				if (openRecordFileName != value)
				{
					openRecordFileName = value;
					View.OpenRecordFileName = value;
				}
			}
		}

		public Vector ImageOriginWorldPosition
		{
			get
			{
				return Settings.ImageOriginPosition;
			}

			set
			{
				if (ImageOriginWorldPosition != value)
				{
					Settings.ImageOriginPosition = value;
					View.ImageOriginWorldPosition = value;
				}
			}
		}

		public float ImageWorldWidth
		{
			get
			{
				return Settings.WorldWidth;
			}

			set
			{
				if (ImageWorldWidth != value)
				{
					Settings.WorldWidth = value;
					View.ImageWorldWidth = value;
				}
			}
		}

		public float ImageWorldHeight
		{
			get
			{
				return Settings.WorldHeight;
			}

			set
			{
				if (ImageWorldHeight != value)
				{
					Settings.WorldHeight = value;
					View.ImageWorldHeight = value;
				}
			}
		}

		public void Save()
		{
			var data = System.IO.File.ReadAllText(this.OpenRecordFileName);
			var behaviorSnapshots = BehaviorRecordParser.Parse(data);
			var bmp = BehaviorVisualizationRenderer.Render(behaviorSnapshots, this.Settings);
			bmp.Save(this.SaveFileName);

			System.Diagnostics.Process.Start(this.SaveFileName);
		}
	}
}
