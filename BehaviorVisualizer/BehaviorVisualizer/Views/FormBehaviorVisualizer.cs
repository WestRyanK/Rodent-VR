using System;
using System.Drawing;
using System.Windows.Forms;
using BehaviorVisualizer.Models;

namespace BehaviorVisualizer
{
	public partial class FormBehaviorVisualizer : Form, Contracts.BehaviorVisualizerViewContract
	{
		public Contracts.BehaviorVisualizerPresenterContract Presenter { get; set; }

		public FormBehaviorVisualizer()
		{
			InitializeComponent();
		}

		public FormBehaviorVisualizer(Contracts.BehaviorVisualizerPresenterContract presenter)
		{
			InitializeComponent();
			this.Presenter = presenter;
			this.Presenter.View = this;
			this.Presenter.Reset();
		}

		#region Path Style
		private void rbPathDots_CheckedChanged(object sender, EventArgs e)
		{
			if (rbPathDots.Checked)
			{
				Presenter.PathStyle = Models.BehaviorVisualizationRendererSettings.PathStyleEnum.Dots;
			}
		}

		private void rbPathLines_CheckedChanged(object sender, EventArgs e)
		{
			if (rbPathLines.Checked)
			{
				Presenter.PathStyle = Models.BehaviorVisualizationRendererSettings.PathStyleEnum.Lines;
			}
		}

		public BehaviorVisualizationRendererSettings.PathStyleEnum PathStyle
		{
			set
			{
				switch (value)
				{
					case BehaviorVisualizationRendererSettings.PathStyleEnum.Dots:
						rbPathDots.Checked = true;
						break;
					case BehaviorVisualizationRendererSettings.PathStyleEnum.Lines:
						rbPathLines.Checked = true;
						break;
					default:
						break;
				}
			}
		}
		#endregion

		#region Path World Width
		private void nudPathWidth_ValueChanged(object sender, EventArgs e)
		{
			Presenter.PathWorldWidth = (float)nudPathWidth.Value;
		}

		public float PathWorldWidth
		{
			set
			{
				nudPathWidth.Value = (decimal)value;
			}
		}
		#endregion

		#region Pixels Per World Unit
		private void nudPixelsPerWorldUnit_ValueChanged(object sender, EventArgs e)
		{
			Presenter.PixelsPerWorldUnit = (float)nudPixelsPerWorldUnit.Value;
		}

		public float PixelsPerWorldUnit
		{
			set
			{
				nudPixelsPerWorldUnit.Value = (decimal)value;
			}
		}
		#endregion

		#region Image Origin World Position
		public Vector ImageOriginWorldPosition
		{
			set
			{
				nudWorldPositionX.Value = (decimal)value.X;
				nudWorldPositionY.Value = (decimal)value.Y;
			}
		}

		private void nudWorldPosition_ValueChanged(object sender, EventArgs e)
		{
			Presenter.ImageOriginWorldPosition = new Vector((float)nudWorldPositionX.Value, (float)nudWorldPositionY.Value, 0);
		}
		#endregion

		#region Image World Size
		public float ImageWorldWidth
		{
			set
			{
				nudImageSizeWidth.Value = (decimal)value;
			}
		}

		public float ImageWorldHeight
		{
			set
			{
				nudImageSizeHeight.Value = (decimal)value;
			}
		}

		private void nudImageSizeWidth_ValueChanged(object sender, EventArgs e)
		{
			Presenter.ImageWorldWidth = (float)nudImageSizeWidth.Value;
		}

		private void nudImageSizeHeight_ValueChanged(object sender, EventArgs e)
		{
			Presenter.ImageWorldHeight = (float)nudImageSizeHeight.Value;
		}
		#endregion

		#region Open Record File Name
		private void tbOpenRecordFileName_TextChanged(object sender, EventArgs e)
		{
			Presenter.OpenRecordFileName = tbOpenRecordFileName.Text;
		}

		public string OpenRecordFileName
		{
			set
			{
				tbOpenRecordFileName.Text = value;
			}
		}
		#endregion

		private void bttnOpenRecordFileName_Click(object sender, EventArgs e)
		{
			openRecordFileDialog.ShowHelp = true;
			var result = openRecordFileDialog.ShowDialog();
			if (result == DialogResult.OK)
			{
				OpenRecordFileName = openRecordFileDialog.FileName;
			}
		}

		#region Save File Name
		private void tbSaveFileName_TextChanged(object sender, EventArgs e)
		{
			Presenter.SaveFileName = tbSaveFileName.Text;
		}

		public string SaveFileName
		{
			set
			{
				tbSaveFileName.Text = value;
			}
		}
		#endregion

		private void bttnFileName_Click(object sender, EventArgs e)
		{
			var result = saveFileDialog.ShowDialog();
			if (result == DialogResult.OK)
			{
				SaveFileName = saveFileDialog.FileName;
			}
		}

		private void bttnSave_Click(object sender, EventArgs e)
		{
			Presenter.Save();
		}

		public Color PathColor
		{
			set
			{
				pnlColor.BackColor = value;
			}
		}

		private void bttnColor_Click(object sender, EventArgs e)
		{
			var result = colorDialog.ShowDialog();
			if (result == DialogResult.OK)
			{
				Presenter.PathColor = colorDialog.Color;
			}
		}
	}
}
