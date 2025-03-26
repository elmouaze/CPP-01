/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:34 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:35 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA::HumanA(std::string name,Weapon &type) : type(type)
{
    this->name=name;
}
void HumanA::attack()
{
    std::cout << this->name << "  attacks with their " << this->type.getType() << std::endl;
}