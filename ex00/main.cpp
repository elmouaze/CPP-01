/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:03 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:04 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int	main(void)
{
	randomChump("Waaaazaa3 Zombie");
	Zombie *zombie = newZombie("Rass Gr3a");
	if (!zombie)
		return(-1);
	delete zombie;
	return (1);
}