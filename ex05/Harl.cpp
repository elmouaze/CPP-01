/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:58 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:59 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
    std::cout <<  "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
    pfunc func[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int res = (level == "DEBUG") * 1 +
    ( level == "INFO") * 2 + 
    ( level == "WARNING") * 3 + 
    ( level == "ERROR") * 4 
    - 1 ;
    if (res == -1)
    {
        std::cerr << "Invalid Complain\n" ;;
        return ;
    }
    (this->*func[res])();
}