/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:34:52 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/04/06 14:06:35 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <stdlib.h>
#include <time.h>

class BitcoinExchange {

public :

    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &copy);
    BitcoinExchange &operator=(const BitcoinExchange &copy);
    ~BitcoinExchange();

    int     parse_input(char **argv, std::map<std::string,float> map);
    int     parse_data(std::map<std::string,float> &map);
    int     check_comma(std::string line);
    int     check_pipe(std::string line);
    bool    check_format_date(std::string tmp);
    bool    check_day(struct tm timeinfo);
    bool    check_date_of_first_bitcoin(struct tm timeinfo);
    bool    verif_value(std:: string tmp2);
    float   convert_value(std::string tmp2);
    bool    find_occurence(std::string tmp, std::map<std::string,float> map, float *value);
    bool    check_valid_date(std::string tmp);
    

protected :

private :

};
#endif