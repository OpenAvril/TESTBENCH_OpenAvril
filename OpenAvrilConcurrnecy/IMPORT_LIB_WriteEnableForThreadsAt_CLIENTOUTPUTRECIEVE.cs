﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class WriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
    {
        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?create_Program@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAPAXXZ")]
        public static extern IntPtr create_Program();

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?write_End@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAXPAVWriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework@2@E@Z")]
        public static extern void write_End(IntPtr obj, byte coreId);

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?write_Start@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAXPAVWriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework@2@E@Z")]
        public static extern void write_Start(IntPtr obj, byte coreId);
    }
}