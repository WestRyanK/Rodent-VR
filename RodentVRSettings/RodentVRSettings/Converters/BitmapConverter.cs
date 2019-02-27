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
	public class BitmapConverter : MarkupExtension, IValueConverter
	{
		#region IValueConverter Implementation
		public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
		{
			System.Drawing.Bitmap bmp = (System.Drawing.Bitmap)value;
			return bmp?.ToWpfBitmap();
		}

		public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			System.Windows.Media.Imaging.BitmapImage image = (System.Windows.Media.Imaging.BitmapImage)value;
			return image?.ToGDIBitmap();
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
