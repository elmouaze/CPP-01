/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:46:44 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:46:45 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Invalid number of args\n" ;
        return (-1);
    }
    Harl new_harl;
    new_harl.complain(argv[1]);
    return 0;
}