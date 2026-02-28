using System;
using System.Runtime.InteropServices;
using System.Security;

namespace OpenAvrilConcurrencyCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class IO
    {
        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?generate_Program@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAPAXXZ")]
        public static extern IntPtr create_Program();

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?initalise_Program@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAXPAVFramework_Server@2@@Z")]
        public static extern void initialise_Programs(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?flip_Input_DoubleBuffer@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAXPAVFramework_Server@2@@Z")]
        public static extern void flip_InBufferToWrite(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?get_flag_isStackLoaded_Server_InputAction@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SA_NPAVFramework_Server@2@@Z")]
        public static extern bool get_flag_IsStackLoaded_Server_InputAction(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?get_flag_isLoaded_Stack_OutputSend@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SA_NPAVFramework_Server@2@@Z")]
        public static extern bool get_flag_IsStackLoaded_Server_OutputSend(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SA_NPAVFramework_Server@2@@Z")]
        public static extern bool get_flag_IsInitialised_OpenAvrilConcurrencyConcurrency(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?get_program_WriteEnableStack_ServerInputAction@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAPAXPAVFramework_Server@2@@Z")]
        public static extern IntPtr get_program_WriteEnableStack_ServerInputAction();

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?get_program_WriteEnableStack_ServerOutputRecieve@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAPAXPAVFramework_Server@2@@Z")]
        public static extern IntPtr get_program_WriteEnableStack_ServerOutputRecieve();

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?pop_From_Stack_Of_Output@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAXPAVFramework_Server@2@@Z")]
        public static extern void pop_Stack_Output(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?push_To_Stack_Of_Input@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAXPAVFramework_Server@2@@Z")]
        public static extern void push_Stack_InputPraises(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?push_To_Stack_Of_Input@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAXPAVFramework_Server@2@@Z")]
        public static extern void select_Set_Intput_Subset(IntPtr obj, byte praiseEventId);

        // Praise Event Id
        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?get_PraiseEventId@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAEPAVFramework_Server@2@@Z")]
        public static extern byte get_PraiseEventId(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "?set_PraiseEventId@CLIBConcurrentServerIO@OpenAvrilConcurrency@@SAXPAVFramework_Server@2@E@Z")]
        public static extern void set_PraiseEventId(IntPtr obj, byte value);
    }

// Praise 0 Data
    [SuppressUnmanagedCodeSecurity]
    internal static class Library_For_Praise_0_Events
    {

    }
}