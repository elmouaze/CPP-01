/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:36 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:37 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon &type;    
    public:
        HumanA(std::string name,Weapon &type);
        void attack();
};