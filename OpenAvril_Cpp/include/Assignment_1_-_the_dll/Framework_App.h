#pragma once
namespace CLIBMyMath
{
    class Framework_App
    {
    public:
        Framework_App();
        virtual ~Framework_App();
        static void app0_CLASS_DECLAIRE_Framework_App();
        static void app1_CLASS_DEFINE_Framework_App();
        static void app3_CLASS_INITIALISE_Framework_App();
        void app0_REG_DECLAIRE_Framework_App();
        void app1_REG_DEFINE_Framework_App(class Framework_App* obj);
        void app2_REG_SUBSTANTIATE_Framework_App(class Framework_App* obj);
        void app3_REG_INITIALISE_Framework_App(class Framework_App* obj);
        void app4_PGM_INSTANTIATE_Framework_App(class Framework_App* obj);
        class Adder* dyn_CLASS_get_Adder();
        class Global* dyn_CLASS_get_Global();
    private:
        static class Adder* _stat_CLASS_ptr_Adder;
        static class Global* _stat_CLASS_ptr_Global;
        static void stat_CLASS_app1_DEFINE_Adder();
        static void stat_CLASS_app1_DEFINE_Global();
        static void stat_CLASS_app3_INITIALISE_Adder();
        static void stat_CLASS_app3_INITIALISE_Global();
        static class Adder* stat_CLASS_get_Adder();
        static class Global* stat_CLASS_get_Global();
    };
}