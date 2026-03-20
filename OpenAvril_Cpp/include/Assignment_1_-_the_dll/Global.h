#pragma once
namespace CLIBMyMath
{
    class Global
    {
    public:
        Global();
        virtual ~Global();
        static double stat_CONVERT_ByteArray_to_Double(unsigned char* java_bytes);
        static float stat_CONVERT_ByteArray_to_Float(unsigned char* java_bytes);
        static unsigned char* stat_CONVERT_Double_to_ByteArray(double doubleValue);
        static unsigned char* stat_CONVERT_Float_to_ByteArray(float floatValue);
        static class Framework_App* stat_CONVERT_ObjPtr_to_Class(void* obj);
    private:
    };
}

