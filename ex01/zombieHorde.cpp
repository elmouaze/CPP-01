#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0) 
        return (NULL);
    Zombie* Green = new Zombie[N];
    if (!Green) {
        std::cerr << "Memory allocation failed!\n";
        return NULL;    
    }
    for (int i = 0; i < N; i++) {
        Green[i].setName(name);
    }
    return (Green);
}