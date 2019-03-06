using System;

namespace RawInput
{
    public class RawMouseInputEventArg : EventArgs
    {
        public RawMouseInputEventArg(MouseEvent arg)
        {
            MouseEvent = arg;
        }
        
        public MouseEvent MouseEvent { get; private set; }
    }
}
