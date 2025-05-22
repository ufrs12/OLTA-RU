using System;
using System.IO.Ports;
using System.IO;

string[] ports = SerialPort.GetPortNames();
string res = "";
// Display each port name to the console.
foreach (string p in ports)
{
    res = "";
    SerialPort port = new SerialPort(p, 115200, Parity.None, 8, StopBits.Two);
    port.ReceivedBytesThreshold = 1;
    port.DataReceived += new SerialDataReceivedEventHandler(DataReceivedHandler);
    if (port.IsOpen == true)
        port.Close();
    try
    {
        port.Open();
        Console.WriteLine(p + " - открылся");
        port.Write("?");
        System.Threading.Thread.Sleep(500);
        port.Write("$I" + "\r\n");
        System.Threading.Thread.Sleep(2000);
        if (res.Replace("\r", "\n").Contains("OLTA_LAMINATOR"))
        {
            Console.Write("Наш клиент - " + p);
        }
        Console.Write(res);
    }
    catch
    {
        Console.WriteLine(p + " - не открылся");
    }
    port.Close();
}
void DataReceivedHandler(
                        object sender,
                        SerialDataReceivedEventArgs e)
{
    SerialPort sp = (SerialPort)sender;
    string indata = sp.ReadExisting();
    Console.Write(indata);
    res += indata;
}
