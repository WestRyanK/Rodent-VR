using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;

namespace BehaviorVisualizer.Converters
{
	//
	// https://stackoverflow.com/questions/94456/load-a-wpf-bitmapimage-from-a-system-drawing-bitmap
	// Jul 21 '11 at 11:12
	// Daniel Wolf
	//
	public static class BitmapConversion
	{
		public static Bitmap ToGDIBitmap(this BitmapSource bitmapsource)
		{
			using (MemoryStream stream = new MemoryStream())
			{
				BitmapEncoder enc = new PngBitmapEncoder();
				//BitmapEncoder enc = new PngBitmapEncoder();
				enc.Frames.Add(BitmapFrame.Create(bitmapsource));
				enc.Save(stream);

				//return new Bitmap(stream);
				using (var tempBitmap = new Bitmap(stream))
				{
					// According to MSDN, one "must keep the stream open for the lifetime of the Bitmap."
					// So we return a copy of the new bitmap, allowing us to dispose both the bitmap and the stream.
					return new Bitmap(tempBitmap);
				}
			}
		}

		[DllImport("kernel32.dll", EntryPoint = "CopyMemory", SetLastError = false)]
		public static extern void CopyMemory(IntPtr dest, IntPtr src, uint count);

		// This implementation seems to be faster, but I'm keeping the other one around just in case it turns out to be faulty
		public static BitmapSource ToWpfBitmap(this Bitmap bitmap)
		{
			BitmapData data = bitmap.LockBits(new System.Drawing.Rectangle(0, 0, bitmap.Width, bitmap.Height), ImageLockMode.ReadOnly, bitmap.PixelFormat);
			WriteableBitmap writeableBitmap = new WriteableBitmap(bitmap.Width, bitmap.Height, bitmap.HorizontalResolution, bitmap.VerticalResolution, bitmap.PixelFormat.ToWpfPixelFormat(), null);

			writeableBitmap.Lock();

			CopyMemory(writeableBitmap.BackBuffer, data.Scan0,
				(uint)(writeableBitmap.BackBufferStride * bitmap.Height));
			writeableBitmap.AddDirtyRect(new Int32Rect(0, 0, bitmap.Width, bitmap.Height));
			writeableBitmap.Unlock();
			bitmap.UnlockBits(data);

			return writeableBitmap;
		}

		public static System.Windows.Media.PixelFormat ToWpfPixelFormat(this System.Drawing.Imaging.PixelFormat pxf)
		{
			switch (pxf)
			{
				case System.Drawing.Imaging.PixelFormat.Format1bppIndexed:
					return PixelFormats.Indexed1;
				case System.Drawing.Imaging.PixelFormat.Format4bppIndexed:
					return PixelFormats.Indexed4;
				case System.Drawing.Imaging.PixelFormat.Format8bppIndexed:
					return PixelFormats.Indexed8;
				case System.Drawing.Imaging.PixelFormat.Format24bppRgb:
					return PixelFormats.Bgr24;
				case System.Drawing.Imaging.PixelFormat.Format32bppRgb:
				case System.Drawing.Imaging.PixelFormat.Format32bppArgb:
				case System.Drawing.Imaging.PixelFormat.Format32bppPArgb:
					return PixelFormats.Bgra32;
				case System.Drawing.Imaging.PixelFormat.Format48bppRgb:
				case System.Drawing.Imaging.PixelFormat.Format16bppGrayScale:
				case System.Drawing.Imaging.PixelFormat.Format16bppRgb555:
				case System.Drawing.Imaging.PixelFormat.Format16bppRgb565:
				case System.Drawing.Imaging.PixelFormat.Format64bppArgb:
				case System.Drawing.Imaging.PixelFormat.Format64bppPArgb:
				case System.Drawing.Imaging.PixelFormat.Indexed:
				case System.Drawing.Imaging.PixelFormat.Gdi:
				case System.Drawing.Imaging.PixelFormat.Alpha:
				case System.Drawing.Imaging.PixelFormat.PAlpha:
				case System.Drawing.Imaging.PixelFormat.Extended:
				case System.Drawing.Imaging.PixelFormat.Canonical:
				case System.Drawing.Imaging.PixelFormat.Undefined:
				case System.Drawing.Imaging.PixelFormat.Max:
				case System.Drawing.Imaging.PixelFormat.Format16bppArgb1555:
				default:
					throw new NotImplementedException();
			}
		}

		//public static BitmapSource ToWpfBitmap(this Bitmap bitmap)
		//{
		//	//var sw = new System.Diagnostics.Stopwatch();
		//	//sw.Start();
		//	using (MemoryStream stream = new MemoryStream())
		//	{
		//		bitmap.Save(stream, ImageFormat.Png);

		//		//sw.Stop();
		//		//System.Diagnostics.Debug.WriteLine("save: " + sw.ElapsedMilliseconds);
		//		//sw.Restart
		//		stream.Position = 0;
		//		BitmapImage result = new BitmapImage();
		//		result.BeginInit();
		//		// According to MSDN, "The default OnDemand cache option retains access to the stream until the image is needed."
		//		// Force the bitmap to load right now so we can dispose the stream.
		//		result.CacheOption = BitmapCacheOption.OnLoad;
		//		result.StreamSource = stream;
		//		result.EndInit();
		//		result.Freeze();
		//		return result;
		//	}
		//}
	}
}