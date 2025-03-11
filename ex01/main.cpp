#include "Zombie.hpp"

int	main(void)
{
	Zombie *W = zombieHorde(10,"GREEN");
	for (int i = 0 ; i < 10;i++){
		W[i].announce();
	}
	delete[] W;
	return (1);
}