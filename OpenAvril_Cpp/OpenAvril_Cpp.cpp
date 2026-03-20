#include <iostream>
#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <iomanip>
#include <list>
#include <string>
#include <thread>
#include <vector>

#include "include\Assignment_1_-_the_dll\LIB_Math.h"
#include "include\Assignment_1_-_the_dll\Framework_App.h"
#include "include\Assignment_1_-_the_dll\Global.h"
#include "include\Assignment_1_-_the_dll\Adder.h"

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
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER_Framework.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER_Global.h"
#include "include\LIB_LaunchEnableForConcurrentThreadsAt_SERVER\LaunchEnableForConcurrentThreadsAt_SERVER_Control.h"

#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION_Framework.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION_Global.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVERINPUTACTION\WriteEnableForThreadsAt_SERVERINPUTACTION_Control.h"

#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global.h"
#include "include\LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE\WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control.h"

#include "include\LIB_OpenAvrilConcurrent_IO_Server\LIB_Concurrent_IO_Server.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Algorithms.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Concurrent.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Concurrent_Control.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Data.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Execute.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Execute_Control.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Framework_Server.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Global.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Input.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Input_Control.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Output.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Output_Control.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Praise0_Algorithm.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Praise0_Input.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Praise0_Output.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\Server.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\User_Alogorithm.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\User_Input.h"
#include "include\LIB_OpenAvrilConcurrent_IO_Server\User_Output.h"
int main()
{
    std::cout << "entered TestBench." << std::endl;
// LIB Adder.
    //void* pgmID_CLIBMAth = CLIBMyMath::CLIBAdder::app_FUNCT_generate_Program();
    //std::cout << "booted CLIBAdder." << std::endl;
    //CLIBMyMath::CLIBAdder::set_Input_Subset_praise0_valueA(pgmID_CLIBMAth, (unsigned char*)uint8_t(1.2));
    //CLIBMyMath::CLIBAdder::set_Input_Subset_praise0_valueB(pgmID_CLIBMAth, (unsigned char*)uint8_t(1.2));
    //std::cout << "set inputs. A=" << uint8_t(1.2) << " B=" << uint8_t(1.2) << std::endl;
    //CLIBMyMath::CLIBAdder::do_Add(pgmID_CLIBMAth);
    //std::cout << "done add." << std::endl;
    //std::cout << "ans = " << CLIBMyMath::Global::stat_ByteArray_to_Double(CLIBMyMath::CLIBAdder::get_Output_Subset_praise0_value(pgmID_CLIBMAth)) << std::endl;

// LIB Templates.
    
    void* pgmID_ReadWrite = OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_generate_Program();
    std::cout << "booted pgmID_ReadWrite => CLIDWriteEnableForThreadsAtSTACK.\n";

    //void* pgmID_LaunchThraed = OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::generate_Program();
    //std::cout << "booted pgmID_LaunchThraed => CLIBLaunchEnableForConcurrentThreadsAtEND.\n";
    

// LIB_Server
    //void* pgmID_0 = OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::generate_Program();
    //std::cout << "booted pgmID_0 => CLIBLaunchEnableForConcurrentThreadsAtSERVER.\n" << std::endl;
    
    //void* pgmID_1 = OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program();
    //std::cout << "booted pgmID_1 => CLIDWriteEnableForThreadsAtSERVERINPUTACTION.\n" << std::endl;;

    //void* pgmID_2 = OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program();
    //std::cout << "booted pgmID_2 => CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE.\n" << std::endl;;

    //void* pgmID = OpenAvrilConcurrency::CLIBConcurrentServerIO::app_FUNCT_generate_Program();

}