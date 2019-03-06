using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Data;
using System.Windows.Markup;

namespace RodentVRSettings.Converters
{
	class ResourceLoaderConverter : MarkupExtension, IValueConverter
	{
		#region IValueConverter Implementation
		public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
		{
			MaterialsEnum? material = value as MaterialsEnum?;
			var bmp = material?.ToBitmapImageResource();
			return bmp;
		}

		public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			return null;
		}
		#endregion

		#region MarkupExtension Implementation
		public override object ProvideValue(IServiceProvider serviceProvider)
		{
			return this;
		} 
		#endregion
	}
}