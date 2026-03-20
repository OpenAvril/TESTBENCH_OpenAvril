#pragma once
#ifdef LIBADDER_EXPORTS
#define LIBADDER_API __declspec(dllexport)
#else
#define LIBADDER_API __declspec(dllimport)
#endif
extern "C" 
{
	namespace CLIBMyMath
	{
		class LIBADDER_API CLIBAdder
		{
		public:
			static void app_FUNCT_do_Add(void* obj);
			static void* app_FUNCT_generate_Program();
			static void app_FUNCT_terminate_Program();
			static unsigned char* app_FUNCT_get_Output_Subset_praise0_value(void* obj);
			static void app_FUNCT_set_Input_Subset_praise0_valueA(void* obj, unsigned char* bytes);
			static void app_FUNCT_set_Input_Subset_praise0_valueB(void* obj, unsigned char* bytes);
		private:
			static void stat_CLASS_create_Framework_App();
			static class Framework_App* stat_CLASS_get_Framework_App();
		};
	}
}