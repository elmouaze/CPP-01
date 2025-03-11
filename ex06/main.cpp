#include "Harl.hpp"
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Invalid number of args\n" ;
        return (-1);
    }
    Harl new_harl;
    new_harl.complain(argv[1]);
    return 0;
}