/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:07:25 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/04/12 15:30:36 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv) {

    RPN                 value;
    std::string         input;

    if (argc != 2) {
        std::cout << RED << "Error:" << END << " bad input !" << std::endl;
        return (1); 
    }
    input = argv[1];
    value.rpn_calculator(input);
    return (0);
}