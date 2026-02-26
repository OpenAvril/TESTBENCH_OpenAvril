#include <iostream>
#include <list>
//#include "include\LIB_WriteEnableForThreadsAt_STACK\LIB_WriteEnableForThreadsAt_STACK.h"
//#include "include\LIB_WriteEnableForThreadsAt_STACK\WriteEnableForThreadsAt_STACK_Framework.h"
//#include "include\LIB_WriteEnableForThreadsAt_STACK\WriteEnableForThreadsAt_STACK.h"
//#include "include\LIB_WriteEnableForThreadsAt_STACK\WriteEnableForThreadsAt_STACK_Global.h"
//#include "include\LIB_WriteEnableForThreadsAt_STACK\WriteEnableForThreadsAt_STACK_Control.h"
//#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LIB_LaunchEnableForConcurrentThreadsAt_END.h"
//#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LaunchEnableForConcurrentThreadsAt_END_Framework.h"
//#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LaunchEnableForConcurrentThreadsAt_END.h"
//#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LaunchEnableForConcurrentThreadsAt_END_Global.h"
//#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LaunchEnableForConcurrentThreadsAt_END_Control.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER_Framework.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION_Framework.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework.h"
#include <cstdint>

int main()
{
    std::cout << "entered TestBench.\n";

    //OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* pgmID_ReadWrite = (OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework*)OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::create_Program();
    //while(pgmID_ReadWrite == NULL) { }
    //std::cout << "booted pgmID_ReadWrite => CLIDWriteEnableForThreadsAtSTACK.\n";

    //OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* pgmID_LaunchConcurrentcy = (OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework*)OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::create_Program();
    //while (pgmID_LaunchConcurrentcy == NULL) {}
    //std::cout << "booted pgmID_LaunchConcurrentcy => CLIBLaunchEnableForConcurrentThreadsAtEND.\n";

    static OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID_0 = static_cast<class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*>(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::create_Program());
    while (pgmID_0 == NULL) {}
    std::cout << "booted pgmID_0 => CLIBLaunchEnableForConcurrentThreadsAtSERVER.\n";
    
    static OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID_1 = static_cast<class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework*>(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program());
    while (pgmID_1 == NULL) {}
    std::cout << "booted pgmID_1 => CLIDWriteEnableForThreadsAtSERVERINPUTACTION.\n";
   
    static OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID_2 = static_cast<class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework*>(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program());
    while (pgmID_2 == NULL) {}
    std::cout << "booted pgmID_2 => CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE.\n";

}
