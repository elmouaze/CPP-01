/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:38 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:39 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(std::string name):type(NULL)
{
    this->name=name;
}
void HumanB::attack()
{
    std::cout << name << "  attacks with their " << type->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &club)
{
    type = &club;
}
