#include "HumanB.hpp"
HumanB::HumanB(std::string name):type(NULL)
{
    this->name=name;
}
void HumanB::attack()
{
    std::cout << name << "  attacks with their " << type->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &club)
{
    type = &club;
}
