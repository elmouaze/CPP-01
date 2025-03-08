#include "Zombie.hpp" 
Zombie* newZombie( std::string name )
{
    Zombie* Green = new Zombie(name);
    if (!Green) 
        std::cerr << "Memory allocation failed!\n";
    return (Green);
}
