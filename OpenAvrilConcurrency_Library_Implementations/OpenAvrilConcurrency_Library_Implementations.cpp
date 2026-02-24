#include <iostream>
#include <list>
#include "include\LIB_WriteEnableForThreadsAt_STACK\LIB_WriteEnableForThreadsAt_STACK.h"
#include "include\LIB_WriteEnableForThreadsAt_STACK\WriteEnableForThreadsAt_STACK_Framework.h"
#include "include\LIB_WriteEnableForThreadsAt_STACK\WriteEnableForThreadsAt_STACK.h"
#include "include\LIB_WriteEnableForThreadsAt_STACK\WriteEnableForThreadsAt_STACK_Global.h"
#include "include\LIB_WriteEnableForThreadsAt_STACK\WriteEnableForThreadsAt_STACK_Control.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LIB_LaunchEnableForConcurrentThreadsAt_END.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LaunchEnableForConcurrentThreadsAt_END_Framework.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LaunchEnableForConcurrentThreadsAt_END.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LaunchEnableForConcurrentThreadsAt_END_Global.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_END\LaunchEnableForConcurrentThreadsAt_END_Control.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER_Framework.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER_Global.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER_Control.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION_Framework.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION_Global.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION_Control.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control.h"
#include <cstdint>

int main()
{
    std::cout << "entered TestBench.\n";

    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* pgmID_ReadWrite = (OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework*)OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::create_Program();
    while(pgmID_ReadWrite == NULL) { }
    std::cout << "booted pgmID_ReadWrite => CLIDWriteEnableForThreadsAtSTACK.\n";

    OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* pgmID_LaunchConcurrentcy = (OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework*)OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::create_Program();
    while (pgmID_LaunchConcurrentcy == NULL) {}
    std::cout << "booted pgmID_LaunchConcurrentcy => CLIBLaunchEnableForConcurrentThreadsAtEND.\n";

    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID_0 = (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*)OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::create_Program();
    while (pgmID_0 == NULL) {}
    std::cout << "booted pgmID_0 => CLIBLaunchEnableForConcurrentThreadsAtSERVER.\n";
    
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID_1 = (OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework*)OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::create_Program();
    while (pgmID_1 == NULL) {}
    std::cout << "booted pgmID_1 => CLIDWriteEnableForThreadsAtSERVERINPUTACTION.\n";
   
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID_2 = (OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework*)OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::create_Program();
    while (pgmID_2 == NULL) {}
    std::cout << "booted pgmID_2 => CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE.\n";

}
