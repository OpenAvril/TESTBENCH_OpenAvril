using System;
using System.Runtime.InteropServices;
using System.Security;

namespace OpenAvrilConcurrencyCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class IO
    {
        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern IntPtr create_Program();

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Initialise_Programs(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Flip_InBufferToWrite(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Flip_OutBufferToWrite(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern bool Get_flag_IsStackLoaded_Server_InputAction(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern bool Get_flag_IsStackLoaded_Server_OutputRecieve(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern bool Get_flag_Avril_FSD_ServerConcurrency_Initialised(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern IntPtr Get_program_WriteEnableStack_ServerInputAction();

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern IntPtr Get_program_WriteEnableStack_ServerOutputRecieve();

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Pop_Stack_Output(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Push_Stack_InputPraises(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Select_Set_Intput_Subset(IntPtr obj, byte praiseEventId);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Set_flag_IsNewInputDataReady(IntPtr obj, bool value);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Set_flag_IsNewOutputDataReady(IntPtr obj, bool value);

        // Praise Event Id
        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern byte Get_PraiseEventId(IntPtr obj);

        [DllImport("LIBConcurrentIOServer.dll", EntryPoint = "")]
        public static extern void Set_PraiseEventId(IntPtr obj, byte value);
    }

// Praise 0 Data
    [SuppressUnmanagedCodeSecurity]
    internal static class Library_For_Praise_0_Events
    {

    }
}