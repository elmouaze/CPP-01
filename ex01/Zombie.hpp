/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:26 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:27 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie{
    private :
        std::string m_name;
    public :
        Zombie();
        ~Zombie();
        void setName(std::string s);
        void announce(void);
};
Zombie* zombieHorde( int N, std::string name );