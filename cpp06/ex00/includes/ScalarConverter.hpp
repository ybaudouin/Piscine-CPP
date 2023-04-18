/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:02:42 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/14 11:37:42 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits.h>

class ScalarConverter {

public :

    ScalarConverter(const ScalarConverter &copy);
    ~ScalarConverter();
    ScalarConverter  &operator=(const ScalarConverter &copy);

    static bool convert(std::string argv);

protected :
  
private :

    ScalarConverter();
    static void convert_char(char argv);
    static void convert_int(int argv);
    static void convert_float(float f, double d);
    static void convert_double(double d);
    static bool check_error(std::string str);
    static bool is_nan_inf(std::string argv);
    static int  get_type(std::string argv);
    static void convert_for_science(std::string argv);
};

#endif