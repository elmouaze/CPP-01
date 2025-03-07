#include "Zombie.hpp"
void randomChump( std::string name )
{
    Zombie *GREEN_ZOMBIE = new Zombie(name);
    GREEN_ZOMBIE->announce();
    return ;
}