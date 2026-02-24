// See https://aka.ms/new-console-template for more information
Console.WriteLine("entered TestBench.");
List<IntPtr> _list_Of_ProgramIDs = new List<IntPtr>();
_list_Of_ProgramIDs.Capacity = 3;

_list_Of_ProgramIDs[0] = OpenAvrilCLIB.LaunchEnableForConcurrentThreadsAtCLIENT.generate_Program(); ;
Console.WriteLine("created program LaunchEnableForConcurrentThreadsAtCLIENT");

_list_Of_ProgramIDs[1] = OpenAvrilCLIB.WriteEnableForThreadsAtCLIENTINPUTACTION.create_Program();
Console.WriteLine("created program WriteEnableForThreadsAtCLIENTINPUTACTION");

_list_Of_ProgramIDs[2] = OpenAvrilCLIB.WriteEnableForThreadsAtCLIENTOUTPUTRECIEVE.create_Program();
Console.WriteLine("created program WriteEnableForThreadsAtCLIENTOUTPUTRECIEVE");
