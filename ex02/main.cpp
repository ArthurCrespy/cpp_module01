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
    std::string str;
    std::string *ptr;

    str = "HI THIS IS BRAIN";
    ptr = &str;

    std::string &ref = str;

    std::cout << "address str: " << &str << std::endl;
    std::cout << "address ptr: " << ptr << std::endl;
    std::cout << "address ref: " << &ref << std::endl;

    std::cout << "str: " << str << std::endl;
    std::cout << "ptr: " << *ptr << std::endl;
    std::cout << "ref: " << ref << std::endl;

    return (0);
}
