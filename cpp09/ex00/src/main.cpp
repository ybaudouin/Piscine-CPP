/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:25:10 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/04/05 14:16:19 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

 int main(int argc, char **argv) {

    BitcoinExchange                 value;
    std::map<std::string, float>    map;

    if (argc != 2) {
        
        std::cout << "execute with ./btc and filename !" << std::endl;
        return (1);
    }
    if (value.parse_data(map))
        exit (1);
    value.parse_input(argv, map);
 }