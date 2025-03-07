#include <string>
#include <iostream>

class Zombie{
    private :
        std::string m_name;
    public :
        Zombie(std::string s);
        ~Zombie();
        void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);