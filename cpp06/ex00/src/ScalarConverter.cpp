/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:11:53 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/14 15:21:06 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

ScalarConverter::ScalarConverter(){

    std::cout << "Class ScalarConverter was created !" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){(void)copy;}

ScalarConverter::~ScalarConverter(){

    std::cout << "Class ScalarConverter was destroyed !" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy){

    std::cout << "Assignment operator ScalarConverter called" << std::endl;
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

bool ScalarConverter::convert(std::string argv){

    int type;
    char *ptr;

    if (!check_error(argv))
        return (false);
    type = get_type(argv);
    switch(type) {
        case 0 :
            convert_for_science(argv);
            break;
        case 1 : 
            convert_char(argv[0]);
            break;
        case 2 :
            convert_int(atoi(argv.c_str()));
            break;
        case 3 :
            convert_float(strtof(argv.c_str(), &ptr), strtod(argv.c_str(), &ptr));
            break;
        default :
            convert_double(strtod(argv.c_str(), &ptr));
            break;
    }
    return (true);
}

int ScalarConverter::get_type(std::string argv) {

    double  d;
    char    *ptr;

    if (is_nan_inf(argv))
        return(0);
    d = strtod(argv.c_str(), &ptr);
    if (argv[0] && !argv[1] && !isdigit(argv[0]))
        return(1);
    if ((d >= INT_MIN && d <= INT_MAX) && (argv.find_first_of("f.", 0) == std::string::npos))
        return (2);
    if (argv.find('f', 0) != std::string::npos)
        return(3);
    else
        return (4);
}

bool ScalarConverter::check_error(std::string str){

    bool    j = false;
    size_t  i = 0;
    
    if(is_nan_inf(str))
        return (true);
    if (i == 0 && !str[i + 1])
        return (true);
    if (str[i] == '-' || str[i] == '+')
            i++;
    for (; i < str.size(); i++)
    {
        if(!isdigit(str[i]))
        {
            if(i != 0 && str[i] == 'f' && !str[i + 1])
                continue;
            else if (str[i] == '.' && j == false)
                j = true;
            else
            {
                std::cout << "char: Impossible\nint: Impossible\nfloat: Impossible\ndouble: Impossible" << std::endl;
                return (false);
            } 
       }
    }
    return (true);
}

void ScalarConverter::convert_char(char c) {

    if (isprint(c)) {
        std::cout << "char : '" << c << "'" << std::endl;
        std::cout << "int : " << static_cast<int>(c) << std::endl;
        std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
    }
}

void ScalarConverter::convert_int(int i) {

    if (i > -1 && i < 128) {

        if (isprint(i))
            std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
        else
            std::cout << "char : Non Displayable"<< std::endl;
    }
    else
       std::cout << "char : Impossible"<< std::endl;
    std::cout << "int : " << i << std::endl;
    std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
}


void ScalarConverter::convert_float(float f, double d) {

     if (f > -1 && f < 128) {

        if (isprint(f))
            std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
        else
            std::cout << "char : Non Displayable"<< std::endl;
    }
    else
       std::cout << "char : Impossible"<< std::endl;
    if (d >= INT_MIN && d <= INT_MAX)
        std::cout << "int : " << static_cast<int>(f) << std::endl;
    else
        std::cout << "int : Impossible"<< std::endl;
    int i = static_cast<int>(f);
    if (f > -100000 && f < 100000) {
        if (f - i == 0) {
            std::cout << "float : " << f << ".0f" << std::endl;
            std::cout << "double : " << static_cast<double>(f) << ".0" << std::endl;
            return;
        }
    }
    std::cout << "float : " << f << "f" << std::endl;
    std::cout << "double : " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::convert_double(double d) {

   if (d > -1 && d < 128) {

        if (isprint(d))
            std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
        else
            std::cout << "char : Non Displayable"<< std::endl;
    }
    else
       std::cout << "char : Impossible"<< std::endl;
    if (d >= INT_MIN && d <= INT_MAX)
        std::cout << "int : " << static_cast<int>(d) << std::endl;
    else
        std::cout << "int : Impossible"<< std::endl;
    int i = static_cast<int>(d);
    if (d > -100000 && d < 100000) {
        if (d - i == 0) {
            std::cout << "float : " << static_cast<float>(d) << ".0f" << std::endl;
            std::cout << "double : " << d << ".0" << std::endl;
            return;
        }
    }
    std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double : " << d << std::endl;

}

bool ScalarConverter::is_nan_inf(std::string argv) {

    if (argv.compare("nanf") == 0 || argv.compare("nan") == 0)
        return (true);
    if (argv.compare("inff") == 0 || argv.compare("inf") == 0)
        return (true);
    if (argv.compare("+inff") == 0 || argv.compare("+inf") == 0)
        return (true);
    if (argv.compare("-inff") == 0 || argv.compare("-inf") == 0)
        return (true);
    return (false);
}

void ScalarConverter::convert_for_science(std::string argv) {

    double d;
    char *ptr;

    d = strtod(argv.c_str(), &ptr);

    std::cout << "char : Impossible"<< std::endl;
    std::cout << "int : Impossible"<< std::endl;
    std::cout << "float : "<< d << "f" << std::endl;
    std::cout << "double : "<< d << std::endl;
}