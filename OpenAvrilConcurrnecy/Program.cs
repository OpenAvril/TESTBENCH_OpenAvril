// See https://aka.ms/new-console-template for more information
Console.WriteLine("entered TestBench.");

IntPtr intPtr0 = OpenAvrilCLIB.LaunchEnableForConcurrentThreadsAtCLIENT.generate_Program(); ;
Console.WriteLine("created program LaunchEnableForConcurrentThreadsAtCLIENT");

IntPtr intPtr1 = OpenAvrilCLIB.WriteEnableForThreadsAtCLIENTINPUTACTION.create_Program();
Console.WriteLine("created program WriteEnableForThreadsAtCLIENTINPUTACTION");

IntPtr intPtr2 = OpenAvrilCLIB.WriteEnableForThreadsAtCLIENTOUTPUTRECIEVE.create_Program();
Console.WriteLine("created program WriteEnableForThreadsAtCLIENTOUTPUTRECIEVE");

IntPtr intPtr3 = OpenAvrilConcurrencyCLIB.IO.create_Program();
Console.WriteLine("created program CLIBConcurrentServerIO");