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

int main(void)
{
    std::string stringSTR;
    std::string *stringPTR;

    stringSTR = "HI THIS IS BRAIN";
    stringPTR = &stringSTR;

    std::string &stringREF = stringSTR;

    std::cout << "address str: " << &stringSTR << std::endl;
    std::cout << "address ptr: " << stringPTR << std::endl;
    std::cout << "address ref: " << &stringREF << std::endl;

    std::cout << "value   str: " << stringSTR << std::endl;
    std::cout << "value   ptr: " << *stringPTR << std::endl;
    std::cout << "value   ref: " << stringREF << std::endl;

    return (0);
}
