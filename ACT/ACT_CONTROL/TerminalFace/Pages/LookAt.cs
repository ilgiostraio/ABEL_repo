using EasyConsole;

namespace TerminalFace.Pages
{
    class LookAt :Page
    {
        public LookAt(Program program)
            : base("LookAt", program)
        {
        }

        public override void Display()
        {
            base.Display();

            Output.WriteLine("LookAt");

            decimal x = Input.ReadDecimal("Please enter value of x (between 0 and 1):", min: 0, max: 1);
            decimal y = Input.ReadDecimal("Please enter value of y (between 0 and 1):", min: 0, max: 1);


            Runner.sendLookAt(x, y);

            EasyConsole.Input.ReadString("Press [Enter] to navigate home");

            Program.NavigateHome();
        }
    }
}
