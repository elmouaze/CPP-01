#include <string>
#include <iostream>

class Zombie{
    private :
        std::string m_name;
    public :
        Zombie();
        ~Zombie();
        void setName(std::string s);
        void announce(void);
};
Zombie* zombieHorde( int N, std::string name );