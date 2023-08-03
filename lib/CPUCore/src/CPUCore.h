#ifndef CPU_CORE
#define CPU_CORE

#include "ElectricalModule_base.h"

class CPUCore : public ElectricalModule_base
{
    public:
        CPUCore();
        ~CPUCore();

        virtual int attachTo() = 0;

    private:

};


#endif