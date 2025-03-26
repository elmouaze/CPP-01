/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:49 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:50 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(){return;}
Weapon::Weapon(std::string type)
{
    this->type = type;
}
const std::string& Weapon::getType(){ return (this->type);}

void Weapon::setType(std::string type ){
    this->type = type; 
    return;
}