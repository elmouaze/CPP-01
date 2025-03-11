#pragma once

#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon *type;    
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &club);
        void attack();
};