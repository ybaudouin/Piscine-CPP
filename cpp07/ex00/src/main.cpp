/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:17:07 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/17 13:54:25 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template< typename T>
T max(T const &a, T const &b) {
    return ((a>=b) ? a : b);
}

template< typename T>
T min(T const &a, T const &b) {
    return ((a<=b) ? a : b);
}


int main( void ) {
    
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Swap a and b :" << std::endl;
::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max(a, b ) = " << ::max( a, b ) << std::endl;
   
    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "Swap c and d :" << std::endl;

::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max(c, d ) = " << ::max( c, d ) << std::endl;

return 0;
}
