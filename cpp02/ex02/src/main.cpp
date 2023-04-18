/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:45:22 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/03 11:26:06 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {

{

std::cout << "ZOOL TEST"<< std::endl;
std::cout << std::endl;

Fixed a(100);
Fixed b(7);
Fixed c(b);

std::cout << "OPERATORS TEST" << std::endl << std::endl;

std::cout << "a = " << a << std::endl;
std::cout <<"c = " << c << std::endl;
std::cout <<"a + c = " << a + c << std::endl;
std::cout << "a / c = " << a / c << std::endl;
std::cout << "a - c = " << a - c << std::endl;
std::cout << "a * c = " << a * c << std::endl << std::endl;

std::cout << "COMPARATORS TEST" << std::endl << std::endl;

std::cout << std::boolalpha << "a > c = " << (a > c) << std::endl;
std::cout << std::boolalpha << "a < c = " << (a < c) << std::endl;
std::cout << std::boolalpha << "a >= c = " << (a >= c) << std::endl;
std::cout << std::boolalpha << "a <= c = " << (a <= c) << std::endl;
std::cout << std::boolalpha << "a == c = " << (a == c) << std::endl;
std::cout << std::boolalpha << "a != c = " << (a != c) << std::endl << std::endl;

std::cout << "INCREMENT TEST" << std::endl << std::endl;

std::cout << "++a = " << ++a << std::endl;
std::cout << a << std::endl;
std::cout << "a++ = " << a++ << std::endl;
std::cout << a << std::endl;
std::cout << std::endl;
std::cout << "--b = " << --b << std::endl;
std::cout << b << std::endl;
std::cout << "b-- = " << b-- << std::endl;
std::cout << b << std::endl << std::endl;

std::cout << "MIN OR MAX TEST" << std::endl << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;
std::cout << std::endl;

}
{

std::cout << "TEST CPP02"<< std::endl;
std::cout << std::endl;

Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}
}