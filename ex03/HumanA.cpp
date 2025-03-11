#include "HumanA.hpp"
HumanA::HumanA(std::string name,Weapon &type) : type(type)
{
    this->name=name;
}
void HumanA::attack()
{
    std::cout << this->name << "  attacks with their " << this->type.getType() << std::endl;
}