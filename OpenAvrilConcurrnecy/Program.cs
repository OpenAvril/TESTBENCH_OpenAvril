// See https://aka.ms/new-console-template for more information
Console.WriteLine("entered TestBench.");
List<IntPtr> _list_Of_ProgramIDs = new List<IntPtr>();
_list_Of_ProgramIDs.Capacity = 3;
//_list_Of_ProgramIDs[0] = ;
Console.WriteLine("");

_list_Of_ProgramIDs[1] = OpenAvrilCLIB.Library_For_WriteEnableForThreadsAt_CLIENTINPUTACTION.create_Program(); ;
Console.WriteLine("created program Library_For_WriteEnableForThreadsAt_CLIENTINPUTACTION");

_list_Of_ProgramIDs[2] = OpenAvrilCLIB.Library_For_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.create_Program(); ;
Console.WriteLine("created program Library_For_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE");