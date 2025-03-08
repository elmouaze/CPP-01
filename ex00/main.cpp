#include "Zombie.hpp"

int	main(void)
{
	randomChump("Waaaazaa3 Zombie");
	Zombie *zombie = newZombie("Rass Gr3a");
	if (!zombie)
		return(-1);
	delete zombie;
	return (1);
}