/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:37:27 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/04/14 14:53:16 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
   
   *this = copy;
}

BitcoinExchange::~BitcoinExchange() {};

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {

    (void)copy;
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                GETTER && SETTER                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                               EXCEPTION                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                 FUNCTIONS                                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

int    BitcoinExchange::check_comma(std::string line) {

    int comma;

    comma = 0;
    for (unsigned int i = 0; i < line.size(); i++) {
        if (line[i] == ',')
            comma++;
    }
    return (comma);
}

int    BitcoinExchange::check_pipe(std::string line) {

    int pipe;

    pipe = 0;
    for (unsigned int i = 0; i < line.size(); i++) {
        if (line[i] == '|')
            pipe++;
    }
    return (pipe);
}

float BitcoinExchange::convert_value(std:: string tmp2) {

    char    *ptr;
    float   value;

    value = strtof(tmp2.c_str(), &ptr);
    if (value > 1000)
        std::cout << RED << "Error:" << END << " too large a number." << std::endl;
    if (value < 0)
        std::cout << RED << "Error:" << END << " not a positive number." << std::endl;
    return (value);
}

bool BitcoinExchange::verif_value(std:: string tmp2) {

    char    *ptr;

    if (!std::isdigit(tmp2[0])) {
        std::cout << RED << "Error:" << END << " bad input => "<< tmp2 << std::endl;
        return (false);
    }
    strtof(tmp2.c_str(), &ptr);
    if (*ptr != '\0') {
        std::cout << RED << "Error:" << END << " bad input => "<< tmp2 << std::endl;
        return (false);
    }
    return (true);
}

bool BitcoinExchange::find_occurence(std::string tmp, std::map<std::string,float> map, float *value) {

    std::map<std::string,float>::iterator    res;

    res = map.find(tmp);
    if (res != map.end())
        return ((*res).second);
    res = map.upper_bound(tmp);
    if (res == map.begin()) {
        std::cout << RED << "Error:" << END << " No data available." << std::endl;
        return (false);
    }
    res--;
    *value = ((*res).second);
    return (true);
}

bool BitcoinExchange::check_valid_date(std::string tmp) {

    std::size_t found;
    std::string tmp1;
    int         date;
    
    found = tmp.find_last_of("-");
    tmp1 = tmp.substr(found +1 , 2);
    if (!std::isdigit(tmp1[0]) || !std::isdigit(tmp[1]))
        return (false);
    date = atoi(tmp1.c_str());
    if (date > 31)
        return (false);
    return (true);
}

bool BitcoinExchange::check_day(struct tm timeinfo) {

    int month;
    
    month = timeinfo.tm_mon;
    if (month == 1) {
        if (timeinfo.tm_mday > 29)
            return (false);
        if (timeinfo.tm_year % 4 != 0 || (timeinfo.tm_year % 100 == 0 && timeinfo.tm_year % 400 != 0))
            if (timeinfo.tm_mday == 29)
                return (false);
    }
    if (((month <= 6 && month % 2 != 0) || (month > 6 && month % 2 == 0)) && timeinfo.tm_mday == 31) {
        return(false);
    }
    return (true);
}

bool BitcoinExchange::check_date_of_first_bitcoin(struct tm timeinfo) {

    int year;
    int month;
    int day;

    year = timeinfo.tm_year;
    month = timeinfo.tm_mon;
    day = timeinfo.tm_mday;
    if (year < 2009 - 1900)
        return (false);
    if (year == 2009 - 1900) {
        if (month == 0)
            if (day < 3)
                return (false);
    }
    return (true);
}

bool BitcoinExchange::check_format_date(std::string tmp) {

    struct tm   timeinfo;
    const char  *format = "%Y-%m-%d";

    if (strptime(tmp.c_str(), format, &timeinfo) == 0)
        return (false);
    if (!check_day(timeinfo))
        return (false);
    if (!check_date_of_first_bitcoin(timeinfo))
        return (false);
    if (!check_valid_date(tmp))
        return (false);
    return (true);
}

int    BitcoinExchange::parse_data(std::map<std::string,float> &map) {

    std::ifstream                           infile;
    std::string                             line;
    std::string                             tmp;
    std::string                             tmp2;
    std::size_t                             found;

    infile.open("data.csv");

    if (!infile.is_open()) {
        std::cout << "Unable to open file for reading!" << std::endl;
        return (1);
    }
    std::getline(infile, line);
        if (line.compare("date,exchange_rate")) {
            std::cout << RED << "Error : Database error !" << END << std::endl;
            exit (1);
        }
    while (std::getline(infile, line)) {
        if (!line.empty()){
            if (check_comma(line) != 1) {
                std::cout << RED << "Error : Database error !" << END << std::endl;
                exit (1);
            }
            found = line.find_first_of(",");
            tmp = line.substr(0, found);
            tmp2 = line.substr(found + 1);
            if (!check_format_date(tmp)) {
                std::cout << RED << "Error : Format date Database error !" << END << std::endl;
                exit (1);
            }
            if (!verif_value(tmp2))
                continue;
            map.insert(std::pair<std::string, float>(tmp, strtof(tmp2.c_str(), NULL)));
        }
    }
    return (0);
}

int    BitcoinExchange::parse_input(char **argv, std::map<std::string,float> map) {

    std::ifstream   infile;
    std::string     line;
    std::string     tmp;
    std::string     tmp2;
    std::size_t     found;
    float           value_input;
    float           value;

    infile.open(argv[1]);

    if (!infile.is_open()) {
        std::cout << "Unable to open file for reading!" << std::endl;
        return (1);
    }
    std::getline(infile, line);
    if (line.compare("date | value")) {
        std::cout << RED << "Error : input error !" << END << std::endl;
        exit (1);
    }
    while (std::getline(infile, line)) {
        if (!line.empty()){
            if (check_pipe(line) != 1) {
                std::cout << RED << "Error:" << END << " Bad input => " << line << std::endl;
                continue;
            }
            found = line.find_first_of("|");
            tmp = line.substr(0, found);
            tmp2 = line.substr(found + 2);
            if (!check_format_date(tmp)) {
                std::cout << RED << "Error:" << END << " Bad input => " << line << std::endl;
                continue ;
            }
            if (!verif_value(tmp2))
                continue;
            value_input = convert_value(tmp2);
            if (value_input < 0 || value_input > 1000)
                continue;
            if (!find_occurence(tmp, map, &value))
                continue;
            std::cout << tmp << " => " << tmp2 << " = " << std::fixed << value * value_input << std::endl;
        }
    }
    return (0);
}