/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:31 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/14 15:59:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void ft_replace(const std::string& filename, const std::string& s1, const std::string& s2)
{
	size_t      pos;
	std::string line;

    std::ifstream input(filename.c_str());
    if (!input || !input.good() || input.fail() || input.eof())
	{
        std::cerr << "Failed to open input file: " << filename << std::endl;
        return ;
    }

    std::ofstream output((filename + ".replace").c_str());
    if (!output)
	{
        std::cerr << "Failed to create output file: " << filename << ".replace" << std::endl;
        return ;
    }

    while (std::getline(input, line))
	{
        pos = 0;
		if (s1.empty())
			output << line << std::endl;
		else
		{
	        while ((pos = line.find(s1, pos)) != std::string::npos)
			{
	            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
	            pos += s2.length();
	        }
            output << line << std::endl;
		}
    }
    std::cout << "Replacement completed successfully. Output file: " << filename << ".replace" << std::endl;
}

int main(int argc, char **argv)
{
	std::string file;
	std::string s1;
	std::string s2;

    if (argc != 4)
	{
        std::cout << "Invalid number of arguments. Usage: program_name filename s1 s2" << std::endl;
        return (1);
    }
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];

    ft_replace(file, s1, s2);

    return (0);
}

