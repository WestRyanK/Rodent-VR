using RodentVRSettings.Models.Configuration;
using RodentVRSettings.Presenters;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace RodentVRSettings.Views
{
	/// <summary>
	/// Interaction logic for MouseInputView.xaml
	/// </summary>
	public partial class MouseInputView : UserControl, Contracts.MouseInputViewContract
	{
		Contracts.MouseInputPresenterContract Presenter { get; set; }

		public MouseInputView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings)
		{
			this.Presenter = new MouseInputPresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init();
		}

		#region Mouse A Device Name
		private void tbMouseADeviceName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.MouseADeviceName = tbMouseADeviceName.Text;
		}

		public string MouseADeviceName
		{
			set
			{
				tbMouseADeviceName.Text = value;
			}
		}
		#endregion

		#region Mouse B Device Name
		private void tbMouseBDeviceName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.MouseBDeviceName = tbMouseBDeviceName.Text;
		}

		public string MouseBDeviceName
		{
			set
			{
				tbMouseBDeviceName.Text = value;
			}
		}
		#endregion

		#region Mouse A Multiplier
		private void nudMouseAMultiplier_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.MouseAMultiplier = (float)nudMouseAMultiplier.Value;
		}

		public float MouseAMultiplier
		{
			set
			{
				nudMouseAMultiplier.Value = value;
			}
		}
		#endregion

		#region Mouse B Multiplier
		private void nudMouseBMultiplier_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.MouseBMultiplier = (float)nudMouseBMultiplier.Value;
		}

		public float MouseBMultiplier
		{
			set
			{
				nudMouseBMultiplier.Value = value;
			}
		}
		#endregion

	}
}
