#include "Zombie.hpp"

Zombie::Zombie(std::string new_name) 
{
	std::cout << "New Zombie : " << m_name << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "This Zombie died: " << m_name << std::endl;
}
void	Zombie::announce(void) 
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n" ;
}