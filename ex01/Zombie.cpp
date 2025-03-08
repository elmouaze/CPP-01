#include "Zombie.hpp"

Zombie::Zombie() 
{
	std::cout << "New Zombie"<< std::endl;
}

Zombie::~Zombie()
{
	std::cout << m_name <<" is destroyed. "<< std::endl;
}
void	Zombie::announce(void) 
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n" ;
}

void	Zombie::setName(std::string name) 
{
	this->m_name = name;
}
