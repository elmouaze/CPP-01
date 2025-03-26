/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:50 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:51 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string type;
    
    public:
        Weapon();
        Weapon(std::string type);
        const std::string& getType();
        void setType(std::string type); 
};