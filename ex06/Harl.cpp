#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}
void Harl::info()
{
    std::cout <<  "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
    pfunc func[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int res = (level == "DEBUG") * 1 +
    ( level == "INFO") * 2 + 
    ( level == "WARNING") * 3 + 
    ( level == "ERROR") * 4 
    - 1 ;
    switch(res)
    {
        case 0:
            while(res<4)
            {
                (this->*func[res++])();
                std::cout << std::endl;
            }
            break;
        case 1:
            while(res<4)
            {
                (this->*func[res++])();
                std::cout << std::endl;
            }
            break;
        case 2:
            while(res<4)
            {
                (this->*func[res++])();
                std::cout << std::endl;
            }
            break;
        case 3:
            while(res<4)
            {
                (this->*func[res++])();
                std::cout << std::endl;
            }
            break;
        default:
            std::cerr << "[ Probably complaining about insignificant problems ]\n" ;
            return ;
    }

}