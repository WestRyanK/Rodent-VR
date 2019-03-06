using System.ComponentModel;

namespace RodentVRSettings.Models
{
	public class ViewModelBase : INotifyPropertyChanged
	{
		#region Property Changed Event
		public event PropertyChangedEventHandler PropertyChanged;

		protected void OnPropertyChanged(string propertyName)
		{
			this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
		} 
		#endregion
	}
}
