#pragma once
namespace CLIBMyMath
{
    class Global
    {
    public:
        Global();
        virtual ~Global();
        static void boot0_CLASS_DECLAIRE_Global();
        static void boot1_CLASS_DEFINE_Global();
        static void boot3_CLASS_INITIALISE_Global();
        static void boot0_REG_DECLAIRE_Global();
        void boot1_REG_DEFINE_Global();
        void boot2_REG_SUBSTANTIATE_Global();
        void boot3_REG_INITIALISE_Global();
        void boot4_PGM_INSTANTIATE_Global();
        static double stat_CONVERT_ByteArray_to_Double(unsigned char* java_bytes);
        static float stat_CONVERT_ByteArray_to_Float(unsigned char* java_bytes);
        static unsigned char* stat_CONVERT_Double_to_ByteArray(double doubleValue);
        static unsigned char* stat_CONVERT_Float_to_ByteArray(float floatValue);
        static class Framework_App* stat_CONVERT_ObjPtr_to_Class(void* obj);
    private:
    };
}

