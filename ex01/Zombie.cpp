/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:24 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:25 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() 
{
	std::cout << "New Zombie"<< std::endl;
}

Zombie::~Zombie()
{
	std::cout << m_name <<" is destroyed. "<< std::endl;
}
void	Zombie::announce(void) 
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n" ;
}

void	Zombie::setName(std::string name) 
{
	this->m_name = name;
}
