using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using MahApps.Metro;
using MahApps.Metro.Controls;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace RodentVRSettings
{
	/// <summary>
	/// Interaction logic for MainWindow.xaml
	/// </summary>
	public partial class MainWindow : MetroWindow//, Contracts.RodentVRSettingsViewContract
	{
		//public Contracts.RodentVRSettingsPresenterContract Presenter { get; set; }

		public MainWindow()
		{
			InitializeComponent();

			//this.Presenter = new Presenters.BehaviorVisualizerPresenter();
			//this.Presenter.View = this;
			//this.Presenter.Reset();
		}
	}
}
