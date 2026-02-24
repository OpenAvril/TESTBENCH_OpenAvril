﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class WriteEnableForThreadsAtCLIENTINPUTACTION
    {
        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?create_Program@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAPAXXZ")]
        public static extern IntPtr create_Program();

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?write_End@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAXPAVWriteEnableForThreadsAt_CLIENTINPUTACTION_Framework@2@E@Z")]
        public static extern void write_End(IntPtr obj, byte coreId);

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?write_Start@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAXPAVWriteEnableForThreadsAt_CLIENTINPUTACTION_Framework@2@E@Z")]
        public static extern void write_Start(IntPtr obj, byte coreId);
    }
}