/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:46:33 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:47:38 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        void complain(std::string level);
};

typedef void (Harl::*pfunc)();
