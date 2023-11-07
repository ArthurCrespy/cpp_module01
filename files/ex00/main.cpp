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

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Computer: Hello Bob!" << std::endl;
	Zombie	*bob = newZombie("Bob");
	bob->announce();
	delete (bob);

	std::cout << "Computer: Hello John!" << std::endl;
	randomChump("John");

	std::cout << "Computer: Hello Michel!" << std::endl;
	Zombie	michel("Michel");
	michel.announce();
}
