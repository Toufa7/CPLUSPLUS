/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:11:31 by otoufah           #+#    #+#             */
/*   Updated: 2023/01/18 15:44:56 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <string.h>

// toupper it converts a given character to uppercase
// Out of range (overflow) an int maybe excced the max or min value of
// Typecast 
// explicit cast keyword in this case is "char" in ordre to convert to any other data types

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (int i = 1; i < ac ; i++)
    {
        for (size_t j = 0; j < strlen(av[i]); j++)
        {
            std::cout << char(toupper(av[i][j]));
        }
    }
    return (0);
}
