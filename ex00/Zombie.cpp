/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:13 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:14 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_name) 
{
	std::cout << "New Zombie : " << m_name << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "This Zombie died: " << m_name << std::endl;
}
void	Zombie::announce(void) 
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n" ;
}