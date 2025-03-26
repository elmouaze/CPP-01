/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:17 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:18 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie{
    private :
        std::string m_name;
    public :
        Zombie(std::string s);
        ~Zombie();
        void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);