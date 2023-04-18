/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:17:07 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/14 12:04:56 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Use ./ScalarConverter literal value" << std::endl;
        return (1);
    }
    if (!ScalarConverter::convert(argv[1]))
        return (1);
    return(0);
}