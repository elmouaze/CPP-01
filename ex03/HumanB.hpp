/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:40 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:41 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon *type;    
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &club);
        void attack();
};