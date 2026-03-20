#pragma once
namespace CLIBMyMath
{
    class Framework_App
    {
    public:
        Framework_App();
        virtual ~Framework_App();
        static void boot0_CLASS_DECLAIRE_Framework_App();
        static void boot1_CLASS_DEFINE_Framework_App();
        static void boot3_CLASS_INITIALISE_Framework_App();
        void boot0_REG_DECLAIRE_Framework_App();
        void boot1_REG_DEFINE_Framework_App(class Framework_App* obj);
        void boot2_REG_SUBSTANTIATE_Framework_App(class Framework_App* obj);
        void boot3_REG_INITIALISE_Framework_App(class Framework_App* obj);
        void boot4_PGM_INSTANTIATE_Framework_App(class Framework_App* obj);
        class Adder* dyn_CLASS_get_Adder();
        class Global* dyn_CLASS_get_Global();
    private:
        static class Adder* _stat_CLASS_ptr_Adder;
        static class Global* _stat_CLASS_ptr_Global;
        static void stat_CLASS_boot1_DEFINE_Adder();
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot3_INITIALISE_Adder();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static class Adder* stat_CLASS_get_Adder();
        static class Global* stat_CLASS_get_Global();
    };
}