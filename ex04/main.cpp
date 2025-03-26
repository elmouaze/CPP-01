/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:45:53 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/26 08:45:54 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void replace(const std::string &filename, const std::string &s1, const std::string &s2)
{
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string outfile_name = filename + ".replace";
    std::ofstream outfile(outfile_name.c_str());
    if (!outfile)
    {
        std::cerr << "Error creating file: " << outfile_name << std::endl;
        return;
    }
    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while (s1.length() > 0 &&
             !line.empty() &&(pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Invalid number of args\n";
        return 1;
    }
    replace(av[1], av[2], av[3]);
    return 0;
}