#ifndef MODULE_BASE
#define MODULE_BASE

#include <iostream>
#include <string>
#include <map>

class Module_base
{
    public:
        Module_base(std::string name);
        ~Module_base();
        inline std::string getName() {return m_name;};
        virtual int attachTo() = 0;

    private:
        std::string m_name;
        std::map <std::string , Module_base*> linkedTo;
};


#endif