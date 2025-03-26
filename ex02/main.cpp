/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:30 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:31 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;


    std::cout << "-------variable-------" << std::endl;
    std::cout << "Address : " << &variable << std::endl;
    std::cout << "Values : " << variable << std::endl;

    std::cout << "\n----StringRef----" << std::endl;
    std::cout << "Address : " << &stringREF << std::endl;
    std::cout << "Values : " << stringREF << std::endl;

    std::cout << "\n----StringPTR----" << std::endl;
    std::cout << "Address : " << stringPTR << std::endl;
    std::cout << "Values : " << *stringPTR << std::endl;
}
