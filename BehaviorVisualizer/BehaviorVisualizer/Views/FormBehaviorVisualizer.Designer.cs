namespace BehaviorVisualizer
{
	partial class FormBehaviorVisualizer
	{
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			System.Windows.Forms.ListViewItem listViewItem1 = new System.Windows.Forms.ListViewItem("Maze 2 Perspective");
			System.Windows.Forms.ListViewItem listViewItem2 = new System.Windows.Forms.ListViewItem("Maze 2 Outline");
			this.bttnSave = new System.Windows.Forms.Button();
			this.tbSaveFileName = new System.Windows.Forms.TextBox();
			this.gbSave = new System.Windows.Forms.GroupBox();
			this.bttnSaveFileName = new System.Windows.Forms.Button();
			this.gbPath = new System.Windows.Forms.GroupBox();
			this.gbPathWidth = new System.Windows.Forms.GroupBox();
			this.nudPathWidth = new System.Windows.Forms.NumericUpDown();
			this.gbPathStyle = new System.Windows.Forms.GroupBox();
			this.rbPathLines = new System.Windows.Forms.RadioButton();
			this.rbPathDots = new System.Windows.Forms.RadioButton();
			this.gbSize = new System.Windows.Forms.GroupBox();
			this.gbImageWorldSize = new System.Windows.Forms.GroupBox();
			this.lblImageSizeHeight = new System.Windows.Forms.Label();
			this.lblImageSizeWidth = new System.Windows.Forms.Label();
			this.nudImageSizeHeight = new System.Windows.Forms.NumericUpDown();
			this.nudImageSizeWidth = new System.Windows.Forms.NumericUpDown();
			this.gbImageOrigin = new System.Windows.Forms.GroupBox();
			this.label2 = new System.Windows.Forms.Label();
			this.label1 = new System.Windows.Forms.Label();
			this.nudWorldPositionY = new System.Windows.Forms.NumericUpDown();
			this.nudWorldPositionX = new System.Windows.Forms.NumericUpDown();
			this.gbPixelsPerWorldUnit = new System.Windows.Forms.GroupBox();
			this.nudPixelsPerWorldUnit = new System.Windows.Forms.NumericUpDown();
			this.saveFileDialog = new System.Windows.Forms.SaveFileDialog();
			this.gbOpenRecordFileName = new System.Windows.Forms.GroupBox();
			this.bttnOpenRecordFileName = new System.Windows.Forms.Button();
			this.tbOpenRecordFileName = new System.Windows.Forms.TextBox();
			this.openRecordFileDialog = new System.Windows.Forms.OpenFileDialog();
			this.gbColor = new System.Windows.Forms.GroupBox();
			this.pnlColor = new System.Windows.Forms.Panel();
			this.bttnColor = new System.Windows.Forms.Button();
			this.colorDialog = new System.Windows.Forms.ColorDialog();
			this.gbBackground = new System.Windows.Forms.GroupBox();
			this.lvBackground = new System.Windows.Forms.ListView();
			this.gbSave.SuspendLayout();
			this.gbPath.SuspendLayout();
			this.gbPathWidth.SuspendLayout();
			((System.ComponentModel.ISupportInitialize)(this.nudPathWidth)).BeginInit();
			this.gbPathStyle.SuspendLayout();
			this.gbSize.SuspendLayout();
			this.gbImageWorldSize.SuspendLayout();
			((System.ComponentModel.ISupportInitialize)(this.nudImageSizeHeight)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.nudImageSizeWidth)).BeginInit();
			this.gbImageOrigin.SuspendLayout();
			((System.ComponentModel.ISupportInitialize)(this.nudWorldPositionY)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.nudWorldPositionX)).BeginInit();
			this.gbPixelsPerWorldUnit.SuspendLayout();
			((System.ComponentModel.ISupportInitialize)(this.nudPixelsPerWorldUnit)).BeginInit();
			this.gbOpenRecordFileName.SuspendLayout();
			this.gbColor.SuspendLayout();
			this.gbBackground.SuspendLayout();
			this.SuspendLayout();
			// 
			// bttnSave
			// 
			this.bttnSave.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
			this.bttnSave.Location = new System.Drawing.Point(202, 21);
			this.bttnSave.Name = "bttnSave";
			this.bttnSave.Size = new System.Drawing.Size(75, 23);
			this.bttnSave.TabIndex = 0;
			this.bttnSave.Text = "Save";
			this.bttnSave.UseVisualStyleBackColor = true;
			this.bttnSave.Click += new System.EventHandler(this.bttnSave_Click);
			// 
			// tbSaveFileName
			// 
			this.tbSaveFileName.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.tbSaveFileName.Location = new System.Drawing.Point(6, 21);
			this.tbSaveFileName.Name = "tbSaveFileName";
			this.tbSaveFileName.Size = new System.Drawing.Size(148, 22);
			this.tbSaveFileName.TabIndex = 1;
			this.tbSaveFileName.TextChanged += new System.EventHandler(this.tbSaveFileName_TextChanged);
			// 
			// gbSave
			// 
			this.gbSave.Controls.Add(this.bttnSaveFileName);
			this.gbSave.Controls.Add(this.bttnSave);
			this.gbSave.Controls.Add(this.tbSaveFileName);
			this.gbSave.Location = new System.Drawing.Point(12, 500);
			this.gbSave.Name = "gbSave";
			this.gbSave.Size = new System.Drawing.Size(283, 55);
			this.gbSave.TabIndex = 2;
			this.gbSave.TabStop = false;
			this.gbSave.Text = "Save";
			// 
			// bttnSaveFileName
			// 
			this.bttnSaveFileName.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
			this.bttnSaveFileName.Location = new System.Drawing.Point(160, 21);
			this.bttnSaveFileName.Name = "bttnSaveFileName";
			this.bttnSaveFileName.Size = new System.Drawing.Size(36, 23);
			this.bttnSaveFileName.TabIndex = 2;
			this.bttnSaveFileName.Text = "...";
			this.bttnSaveFileName.UseVisualStyleBackColor = true;
			this.bttnSaveFileName.Click += new System.EventHandler(this.bttnFileName_Click);
			// 
			// gbPath
			// 
			this.gbPath.Controls.Add(this.gbColor);
			this.gbPath.Controls.Add(this.gbPathWidth);
			this.gbPath.Controls.Add(this.gbPathStyle);
			this.gbPath.Location = new System.Drawing.Point(12, 12);
			this.gbPath.Name = "gbPath";
			this.gbPath.Size = new System.Drawing.Size(283, 221);
			this.gbPath.TabIndex = 3;
			this.gbPath.TabStop = false;
			this.gbPath.Text = "Path";
			// 
			// gbPathWidth
			// 
			this.gbPathWidth.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.gbPathWidth.Controls.Add(this.nudPathWidth);
			this.gbPathWidth.Location = new System.Drawing.Point(6, 105);
			this.gbPathWidth.Name = "gbPathWidth";
			this.gbPathWidth.Size = new System.Drawing.Size(271, 49);
			this.gbPathWidth.TabIndex = 3;
			this.gbPathWidth.TabStop = false;
			this.gbPathWidth.Text = "Width";
			// 
			// nudPathWidth
			// 
			this.nudPathWidth.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.nudPathWidth.DecimalPlaces = 4;
			this.nudPathWidth.Location = new System.Drawing.Point(6, 21);
			this.nudPathWidth.Name = "nudPathWidth";
			this.nudPathWidth.Size = new System.Drawing.Size(259, 22);
			this.nudPathWidth.TabIndex = 0;
			this.nudPathWidth.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
			this.nudPathWidth.ValueChanged += new System.EventHandler(this.nudPathWidth_ValueChanged);
			// 
			// gbPathStyle
			// 
			this.gbPathStyle.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.gbPathStyle.Controls.Add(this.rbPathLines);
			this.gbPathStyle.Controls.Add(this.rbPathDots);
			this.gbPathStyle.Location = new System.Drawing.Point(6, 21);
			this.gbPathStyle.Name = "gbPathStyle";
			this.gbPathStyle.Size = new System.Drawing.Size(271, 78);
			this.gbPathStyle.TabIndex = 4;
			this.gbPathStyle.TabStop = false;
			this.gbPathStyle.Text = "Style";
			// 
			// rbPathLines
			// 
			this.rbPathLines.AutoSize = true;
			this.rbPathLines.Location = new System.Drawing.Point(6, 49);
			this.rbPathLines.Name = "rbPathLines";
			this.rbPathLines.Size = new System.Drawing.Size(63, 21);
			this.rbPathLines.TabIndex = 1;
			this.rbPathLines.TabStop = true;
			this.rbPathLines.Text = "Lines";
			this.rbPathLines.UseVisualStyleBackColor = true;
			this.rbPathLines.CheckedChanged += new System.EventHandler(this.rbPathLines_CheckedChanged);
			// 
			// rbPathDots
			// 
			this.rbPathDots.AutoSize = true;
			this.rbPathDots.Location = new System.Drawing.Point(6, 21);
			this.rbPathDots.Name = "rbPathDots";
			this.rbPathDots.Size = new System.Drawing.Size(58, 21);
			this.rbPathDots.TabIndex = 0;
			this.rbPathDots.TabStop = true;
			this.rbPathDots.Text = "Dots";
			this.rbPathDots.UseVisualStyleBackColor = true;
			this.rbPathDots.CheckedChanged += new System.EventHandler(this.rbPathDots_CheckedChanged);
			// 
			// gbSize
			// 
			this.gbSize.Controls.Add(this.gbImageWorldSize);
			this.gbSize.Controls.Add(this.gbImageOrigin);
			this.gbSize.Controls.Add(this.gbPixelsPerWorldUnit);
			this.gbSize.Location = new System.Drawing.Point(12, 239);
			this.gbSize.Name = "gbSize";
			this.gbSize.Size = new System.Drawing.Size(283, 194);
			this.gbSize.TabIndex = 4;
			this.gbSize.TabStop = false;
			this.gbSize.Text = "Size";
			// 
			// gbImageWorldSize
			// 
			this.gbImageWorldSize.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.gbImageWorldSize.Controls.Add(this.lblImageSizeHeight);
			this.gbImageWorldSize.Controls.Add(this.lblImageSizeWidth);
			this.gbImageWorldSize.Controls.Add(this.nudImageSizeHeight);
			this.gbImageWorldSize.Controls.Add(this.nudImageSizeWidth);
			this.gbImageWorldSize.Location = new System.Drawing.Point(6, 135);
			this.gbImageWorldSize.Name = "gbImageWorldSize";
			this.gbImageWorldSize.Size = new System.Drawing.Size(271, 51);
			this.gbImageWorldSize.TabIndex = 3;
			this.gbImageWorldSize.TabStop = false;
			this.gbImageWorldSize.Text = "Image World Size";
			// 
			// lblImageSizeHeight
			// 
			this.lblImageSizeHeight.AutoSize = true;
			this.lblImageSizeHeight.Location = new System.Drawing.Point(140, 23);
			this.lblImageSizeHeight.Name = "lblImageSizeHeight";
			this.lblImageSizeHeight.Size = new System.Drawing.Size(22, 17);
			this.lblImageSizeHeight.TabIndex = 2;
			this.lblImageSizeHeight.Text = "H:";
			// 
			// lblImageSizeWidth
			// 
			this.lblImageSizeWidth.AutoSize = true;
			this.lblImageSizeWidth.Location = new System.Drawing.Point(7, 23);
			this.lblImageSizeWidth.Name = "lblImageSizeWidth";
			this.lblImageSizeWidth.Size = new System.Drawing.Size(25, 17);
			this.lblImageSizeWidth.TabIndex = 1;
			this.lblImageSizeWidth.Text = "W:";
			// 
			// nudImageSizeHeight
			// 
			this.nudImageSizeHeight.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.nudImageSizeHeight.DecimalPlaces = 4;
			this.nudImageSizeHeight.Location = new System.Drawing.Point(167, 21);
			this.nudImageSizeHeight.Maximum = new decimal(new int[] {
            5000,
            0,
            0,
            0});
			this.nudImageSizeHeight.Name = "nudImageSizeHeight";
			this.nudImageSizeHeight.Size = new System.Drawing.Size(98, 22);
			this.nudImageSizeHeight.TabIndex = 1;
			this.nudImageSizeHeight.Value = new decimal(new int[] {
            300,
            0,
            0,
            0});
			this.nudImageSizeHeight.ValueChanged += new System.EventHandler(this.nudImageSizeHeight_ValueChanged);
			// 
			// nudImageSizeWidth
			// 
			this.nudImageSizeWidth.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.nudImageSizeWidth.DecimalPlaces = 4;
			this.nudImageSizeWidth.Location = new System.Drawing.Point(34, 21);
			this.nudImageSizeWidth.Maximum = new decimal(new int[] {
            5000,
            0,
            0,
            0});
			this.nudImageSizeWidth.Name = "nudImageSizeWidth";
			this.nudImageSizeWidth.Size = new System.Drawing.Size(98, 22);
			this.nudImageSizeWidth.TabIndex = 0;
			this.nudImageSizeWidth.Value = new decimal(new int[] {
            300,
            0,
            0,
            0});
			this.nudImageSizeWidth.ValueChanged += new System.EventHandler(this.nudImageSizeWidth_ValueChanged);
			// 
			// gbImageOrigin
			// 
			this.gbImageOrigin.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.gbImageOrigin.Controls.Add(this.label2);
			this.gbImageOrigin.Controls.Add(this.label1);
			this.gbImageOrigin.Controls.Add(this.nudWorldPositionY);
			this.gbImageOrigin.Controls.Add(this.nudWorldPositionX);
			this.gbImageOrigin.Location = new System.Drawing.Point(6, 78);
			this.gbImageOrigin.Name = "gbImageOrigin";
			this.gbImageOrigin.Size = new System.Drawing.Size(271, 51);
			this.gbImageOrigin.TabIndex = 0;
			this.gbImageOrigin.TabStop = false;
			this.gbImageOrigin.Text = "Image Origin World Position";
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Location = new System.Drawing.Point(140, 23);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(21, 17);
			this.label2.TabIndex = 2;
			this.label2.Text = "Y:";
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(7, 23);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(21, 17);
			this.label1.TabIndex = 1;
			this.label1.Text = "X:";
			// 
			// nudWorldPositionY
			// 
			this.nudWorldPositionY.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.nudWorldPositionY.DecimalPlaces = 4;
			this.nudWorldPositionY.Location = new System.Drawing.Point(167, 21);
			this.nudWorldPositionY.Maximum = new decimal(new int[] {
            5000,
            0,
            0,
            0});
			this.nudWorldPositionY.Minimum = new decimal(new int[] {
            5000,
            0,
            0,
            -2147483648});
			this.nudWorldPositionY.Name = "nudWorldPositionY";
			this.nudWorldPositionY.Size = new System.Drawing.Size(98, 22);
			this.nudWorldPositionY.TabIndex = 1;
			this.nudWorldPositionY.Value = new decimal(new int[] {
            300,
            0,
            0,
            0});
			this.nudWorldPositionY.ValueChanged += new System.EventHandler(this.nudWorldPosition_ValueChanged);
			// 
			// nudWorldPositionX
			// 
			this.nudWorldPositionX.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.nudWorldPositionX.DecimalPlaces = 4;
			this.nudWorldPositionX.Location = new System.Drawing.Point(34, 21);
			this.nudWorldPositionX.Maximum = new decimal(new int[] {
            5000,
            0,
            0,
            0});
			this.nudWorldPositionX.Minimum = new decimal(new int[] {
            5000,
            0,
            0,
            -2147483648});
			this.nudWorldPositionX.Name = "nudWorldPositionX";
			this.nudWorldPositionX.Size = new System.Drawing.Size(98, 22);
			this.nudWorldPositionX.TabIndex = 0;
			this.nudWorldPositionX.Value = new decimal(new int[] {
            300,
            0,
            0,
            0});
			this.nudWorldPositionX.ValueChanged += new System.EventHandler(this.nudWorldPosition_ValueChanged);
			// 
			// gbPixelsPerWorldUnit
			// 
			this.gbPixelsPerWorldUnit.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.gbPixelsPerWorldUnit.Controls.Add(this.nudPixelsPerWorldUnit);
			this.gbPixelsPerWorldUnit.Location = new System.Drawing.Point(6, 21);
			this.gbPixelsPerWorldUnit.Name = "gbPixelsPerWorldUnit";
			this.gbPixelsPerWorldUnit.Size = new System.Drawing.Size(271, 51);
			this.gbPixelsPerWorldUnit.TabIndex = 0;
			this.gbPixelsPerWorldUnit.TabStop = false;
			this.gbPixelsPerWorldUnit.Text = "Pixels Per World Unit";
			// 
			// nudPixelsPerWorldUnit
			// 
			this.nudPixelsPerWorldUnit.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.nudPixelsPerWorldUnit.DecimalPlaces = 4;
			this.nudPixelsPerWorldUnit.Location = new System.Drawing.Point(6, 21);
			this.nudPixelsPerWorldUnit.Maximum = new decimal(new int[] {
            5000,
            0,
            0,
            0});
			this.nudPixelsPerWorldUnit.Name = "nudPixelsPerWorldUnit";
			this.nudPixelsPerWorldUnit.Size = new System.Drawing.Size(259, 22);
			this.nudPixelsPerWorldUnit.TabIndex = 0;
			this.nudPixelsPerWorldUnit.Value = new decimal(new int[] {
            300,
            0,
            0,
            0});
			this.nudPixelsPerWorldUnit.ValueChanged += new System.EventHandler(this.nudPixelsPerWorldUnit_ValueChanged);
			// 
			// saveFileDialog
			// 
			this.saveFileDialog.Filter = "PNG|*.png|JPG|*.jpg|BMP|*.bmp";
			this.saveFileDialog.Title = "Save Visualization";
			// 
			// gbOpenRecordFileName
			// 
			this.gbOpenRecordFileName.Controls.Add(this.bttnOpenRecordFileName);
			this.gbOpenRecordFileName.Controls.Add(this.tbOpenRecordFileName);
			this.gbOpenRecordFileName.Location = new System.Drawing.Point(12, 439);
			this.gbOpenRecordFileName.Name = "gbOpenRecordFileName";
			this.gbOpenRecordFileName.Size = new System.Drawing.Size(283, 55);
			this.gbOpenRecordFileName.TabIndex = 3;
			this.gbOpenRecordFileName.TabStop = false;
			this.gbOpenRecordFileName.Text = "Open Record";
			// 
			// bttnOpenRecordFileName
			// 
			this.bttnOpenRecordFileName.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
			this.bttnOpenRecordFileName.Location = new System.Drawing.Point(241, 21);
			this.bttnOpenRecordFileName.Name = "bttnOpenRecordFileName";
			this.bttnOpenRecordFileName.Size = new System.Drawing.Size(36, 23);
			this.bttnOpenRecordFileName.TabIndex = 2;
			this.bttnOpenRecordFileName.Text = "...";
			this.bttnOpenRecordFileName.UseVisualStyleBackColor = true;
			this.bttnOpenRecordFileName.Click += new System.EventHandler(this.bttnOpenRecordFileName_Click);
			// 
			// tbOpenRecordFileName
			// 
			this.tbOpenRecordFileName.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.tbOpenRecordFileName.Location = new System.Drawing.Point(6, 21);
			this.tbOpenRecordFileName.Name = "tbOpenRecordFileName";
			this.tbOpenRecordFileName.Size = new System.Drawing.Size(229, 22);
			this.tbOpenRecordFileName.TabIndex = 1;
			this.tbOpenRecordFileName.TextChanged += new System.EventHandler(this.tbOpenRecordFileName_TextChanged);
			// 
			// openRecordFileDialog
			// 
			this.openRecordFileDialog.Filter = "Text Record|*.txt|All Files|*.*";
			// 
			// gbColor
			// 
			this.gbColor.Controls.Add(this.bttnColor);
			this.gbColor.Controls.Add(this.pnlColor);
			this.gbColor.Location = new System.Drawing.Point(6, 160);
			this.gbColor.Name = "gbColor";
			this.gbColor.Size = new System.Drawing.Size(271, 55);
			this.gbColor.TabIndex = 5;
			this.gbColor.TabStop = false;
			this.gbColor.Text = "Color";
			// 
			// pnlColor
			// 
			this.pnlColor.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
			this.pnlColor.Location = new System.Drawing.Point(6, 21);
			this.pnlColor.Name = "pnlColor";
			this.pnlColor.Size = new System.Drawing.Size(217, 28);
			this.pnlColor.TabIndex = 0;
			// 
			// bttnColor
			// 
			this.bttnColor.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
			this.bttnColor.Location = new System.Drawing.Point(229, 21);
			this.bttnColor.Name = "bttnColor";
			this.bttnColor.Size = new System.Drawing.Size(36, 23);
			this.bttnColor.TabIndex = 3;
			this.bttnColor.Text = "...";
			this.bttnColor.UseVisualStyleBackColor = true;
			this.bttnColor.Click += new System.EventHandler(this.bttnColor_Click);
			// 
			// gbBackground
			// 
			this.gbBackground.Controls.Add(this.lvBackground);
			this.gbBackground.Location = new System.Drawing.Point(301, 12);
			this.gbBackground.Name = "gbBackground";
			this.gbBackground.Size = new System.Drawing.Size(238, 543);
			this.gbBackground.TabIndex = 5;
			this.gbBackground.TabStop = false;
			this.gbBackground.Text = "Background";
			// 
			// lvBackground
			// 
			this.lvBackground.Items.AddRange(new System.Windows.Forms.ListViewItem[] {
            listViewItem1,
            listViewItem2});
			this.lvBackground.Location = new System.Drawing.Point(6, 21);
			this.lvBackground.Name = "lvBackground";
			this.lvBackground.Size = new System.Drawing.Size(226, 516);
			this.lvBackground.TabIndex = 0;
			this.lvBackground.UseCompatibleStateImageBehavior = false;
			// 
			// FormBehaviorVisualizer
			// 
			this.AcceptButton = this.bttnSave;
			this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(757, 567);
			this.Controls.Add(this.gbBackground);
			this.Controls.Add(this.gbOpenRecordFileName);
			this.Controls.Add(this.gbSize);
			this.Controls.Add(this.gbPath);
			this.Controls.Add(this.gbSave);
			this.Name = "FormBehaviorVisualizer";
			this.Text = "Behavior Visualizer";
			this.gbSave.ResumeLayout(false);
			this.gbSave.PerformLayout();
			this.gbPath.ResumeLayout(false);
			this.gbPathWidth.ResumeLayout(false);
			((System.ComponentModel.ISupportInitialize)(this.nudPathWidth)).EndInit();
			this.gbPathStyle.ResumeLayout(false);
			this.gbPathStyle.PerformLayout();
			this.gbSize.ResumeLayout(false);
			this.gbImageWorldSize.ResumeLayout(false);
			this.gbImageWorldSize.PerformLayout();
			((System.ComponentModel.ISupportInitialize)(this.nudImageSizeHeight)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.nudImageSizeWidth)).EndInit();
			this.gbImageOrigin.ResumeLayout(false);
			this.gbImageOrigin.PerformLayout();
			((System.ComponentModel.ISupportInitialize)(this.nudWorldPositionY)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.nudWorldPositionX)).EndInit();
			this.gbPixelsPerWorldUnit.ResumeLayout(false);
			((System.ComponentModel.ISupportInitialize)(this.nudPixelsPerWorldUnit)).EndInit();
			this.gbOpenRecordFileName.ResumeLayout(false);
			this.gbOpenRecordFileName.PerformLayout();
			this.gbColor.ResumeLayout(false);
			this.gbBackground.ResumeLayout(false);
			this.ResumeLayout(false);

		}

		#endregion

		private System.Windows.Forms.Button bttnSave;
		private System.Windows.Forms.TextBox tbSaveFileName;
		private System.Windows.Forms.GroupBox gbSave;
		private System.Windows.Forms.Button bttnSaveFileName;
		private System.Windows.Forms.GroupBox gbPath;
		private System.Windows.Forms.GroupBox gbPathWidth;
		private System.Windows.Forms.NumericUpDown nudPathWidth;
		private System.Windows.Forms.GroupBox gbPathStyle;
		private System.Windows.Forms.RadioButton rbPathLines;
		private System.Windows.Forms.RadioButton rbPathDots;
		private System.Windows.Forms.GroupBox gbSize;
		private System.Windows.Forms.GroupBox gbPixelsPerWorldUnit;
		private System.Windows.Forms.NumericUpDown nudPixelsPerWorldUnit;
		private System.Windows.Forms.SaveFileDialog saveFileDialog;
		private System.Windows.Forms.GroupBox gbOpenRecordFileName;
		private System.Windows.Forms.Button bttnOpenRecordFileName;
		private System.Windows.Forms.TextBox tbOpenRecordFileName;
		private System.Windows.Forms.OpenFileDialog openRecordFileDialog;
		private System.Windows.Forms.GroupBox gbImageOrigin;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.NumericUpDown nudWorldPositionY;
		private System.Windows.Forms.NumericUpDown nudWorldPositionX;
		private System.Windows.Forms.GroupBox gbImageWorldSize;
		private System.Windows.Forms.Label lblImageSizeHeight;
		private System.Windows.Forms.Label lblImageSizeWidth;
		private System.Windows.Forms.NumericUpDown nudImageSizeHeight;
		private System.Windows.Forms.NumericUpDown nudImageSizeWidth;
		private System.Windows.Forms.GroupBox gbColor;
		private System.Windows.Forms.Button bttnColor;
		private System.Windows.Forms.Panel pnlColor;
		private System.Windows.Forms.ColorDialog colorDialog;
		private System.Windows.Forms.GroupBox gbBackground;
		private System.Windows.Forms.ListView lvBackground;
	}
}

