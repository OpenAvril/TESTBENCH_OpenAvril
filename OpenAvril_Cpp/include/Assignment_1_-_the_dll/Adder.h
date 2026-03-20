#pragma once
#include <limits>
namespace CLIBMyMath
{
	class Adder
	{
	public:
		Adder();
		~Adder();
		void app_FUNCT_do_Add(class Framework_App* obj);
		static void boot0_CLASS_DECLAIRE_Adder();
		static void boot1_CLASS_DEFINE_Adder();
		static void boot3_CLASS_INITIALISE_Adder();
		static void boot0_REG_DECLAIRE_Adder();
		void boot1_REG_DEFINE_Adder();
		void boot2_REG_SUBSTANTIATE_Adder();
		void boot3_REG_INITIALISE_Adder();
		float dyn_REG_app_FUNCT_get_Output_Subset_praise0_value();
		void dyn_REG_app_FUNCT_set_Input_Subset_praise0_valueA(float newValue);
		void dyn_REG_app_FUNCT_set_Input_Subset_praise0_valueB(float newValue);
	private:
		static float* _stat_REG_ptr_Input_valueA;
		static float* _stat_REG_ptr_Input_valueB;
		static double* _stat_REG_ptr_Output_value;
		static void stat_REG_boot1_DEFINE_ptr_Input_valueA();
		static void stat_REG_boot1_DEFINE_ptr_Input_valueB();
		static void stat_REG_boot1_DEFINE_ptr_Output_value();
		static void stat_REG_boot2_SUBSTANTIATE_ptr_Input_valueA();
		static void stat_REG_boot2_SUBSTANTIATE_ptr_Input_valueB();
		static void stat_REG_boot2_SUBSTANTIATE_ptr_Output_value();
		static void stat_REG_boot3_INITIALISE_ptr_Input_valueA();
		static void stat_REG_boot3_INITIALISE_ptr_Input_valueB();
		static void stat_REG_boot3_INITIALISE_ptr_Output_value();
		static float* stat_REG_get_ptr_Input_Subset_praise0_valueA();
		static float* stat_REG_get_ptr_Input_Subset_praise0_valueB();
		static double* stat_REG_app_get_ptr_Output_Subset_praise0_value();
		static void stat_REG_set_Input_Subset_praise0_valueA(float newValue);
		static void stat_REG_set_Input_Subset_praise0_valueB(float newValue);
		static void stat_REG_set_Output_Subset_praise0_value(double newValue);
	};
}
