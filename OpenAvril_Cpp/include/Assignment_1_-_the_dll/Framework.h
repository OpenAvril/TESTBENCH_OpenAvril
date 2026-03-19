#pragma once

namespace CLIBMyMath
{
    class Framework
    {
// public.
    public:
    // constructor.
        Framework();

    // destructor.
        virtual ~Framework();

    // dynamic.
        // create.
        void dyn_initialise(void* obj);
        // get.
        class Adder* dyn_CLASS_get_Adder();
        // set.
    // static.
        // create.
        // get.
        // set.

// private.
	// static.
		// classes.
        static class Adder* _stat_CLASS_ptr_Adder;
        static class Global* _stat_CLASS_ptr_Global;
			// create.
        static void stat_CLASS_create_Adder();
        static void stat_CLASS_create_Global();
		// get.
        static class Adder* stat_CLASS_get_Adder();
        static class Global* stat_CLASS_get_Global();
		// set.
	// registers.
		// create.
		// get.
		// set.
    };
}
