using System;

namespace RawInput
{
    public class RawKeyboardInputEventArg : EventArgs
    {
        public RawKeyboardInputEventArg(KeyPressEvent arg)
        {
            KeyPressEvent = arg;
        }
        
        public KeyPressEvent KeyPressEvent { get; private set; }
    }
}
