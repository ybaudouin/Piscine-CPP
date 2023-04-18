/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:52:59 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/13 11:42:28 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    std::string str;
    Harl harl;

    if (argc < 2)
        std::cout << "Too many arguments";
    else
    {
        str = argv[1];
        switch (harl.complain(str))
        {
        case 0:
            harl.debug();
            harl.info();
            harl.warning();
            harl.error();
            break;
        case 1:
            harl.info();
            harl.warning();
            harl.error();
            break;
        case 2:
            harl.warning();
            harl.error();
            break;
        case 3:
            harl.error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
}