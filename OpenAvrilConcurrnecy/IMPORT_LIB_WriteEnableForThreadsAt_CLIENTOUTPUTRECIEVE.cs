﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class Library_For_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE
    {
        [DllImport("LIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE.dll", EntryPoint = "")]
        public static extern IntPtr create_Program();

        [DllImport("LIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE.dll", EntryPoint = "")]
        public static extern void write_End(IntPtr obj, byte coreId);

        [DllImport("LIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE.dll", EntryPoint = "")]
        public static extern void write_Start(IntPtr obj, byte coreId);
    }
}