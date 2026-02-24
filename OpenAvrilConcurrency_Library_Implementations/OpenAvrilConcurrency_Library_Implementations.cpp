#include <iostream>
#include <list>
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

int main()
{
    std::cout << "entered TestBench.\n";
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* pgmID_0 = (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*)OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::create_Program();
    while (pgmID_0 == NULL) {}
    std::cout << "booted pgmID_1 => CLIBLaunchEnableForConcurrentThreadsAtSERVER.\n";
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* pgmID_1 = (OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework*)OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::create_Program();
    while (pgmID_1 == NULL) {}
    std::cout << "booted pgmID_1 => CLIDWriteEnableForThreadsAtSERVERINPUTACTION.\n";
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* pgmID_2 = (OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework*)OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::create_Program();
    while (pgmID_2 == NULL) {}
    std::cout << "booted pgmID_1 => CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE.\n";
}
