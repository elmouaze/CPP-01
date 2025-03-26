/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:28 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:29 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0) 
        return (NULL);
    Zombie* Green = new Zombie[N];
    if (!Green) {
        std::cerr << "Memory allocation failed!\n";
        return NULL;    
    }
    for (int i = 0; i < N; i++) {
        Green[i].setName(name);
    }
    return (Green);
}