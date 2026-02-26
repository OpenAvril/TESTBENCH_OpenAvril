﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class LaunchEnableForConcurrentThreadsAtCLIENT
    {
        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?create_Program@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SAPAXXZ")]
        public static extern IntPtr generate_Program();

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?request_Wait_launch@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SAXPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
        public static extern void request_Wait_Launch(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?thread_End@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SAXPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
        public static extern void thread_End(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_coreId_To_launch@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SAEPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
        public static extern byte get_coreId_To_Launch(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_Flag_Active@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
        public static extern bool get_Flag_Active(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_Flag_ConcurrentCoreState@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
        public static extern bool get_Flag_ConcurrentCoreState(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_Flag_Idle@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
        public static extern bool get_Flag_Idle(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_State_launchBit@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
        public static extern bool get_State_LaunchBit(IntPtr obj);
    }
}