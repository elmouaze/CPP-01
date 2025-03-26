/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:10 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:11 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 
Zombie* newZombie( std::string name )
{
    Zombie* Green = new Zombie(name);
    if (!Green) 
        std::cerr << "Memory allocation failed!\n";
    return (Green);
}
