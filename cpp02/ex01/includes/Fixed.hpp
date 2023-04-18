/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:45:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/02 11:52:17 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public :

    Fixed();
    Fixed(const Fixed &src);
    Fixed(const int);
    Fixed(const float);
    ~Fixed();

    Fixed &operator=(const Fixed &src);
    int getRawBits() const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

private :

    int     _nbr;
    static const int RawBits = 8;
    
};

std::ostream &operator<<(std::ostream &os, const Fixed &src);

#endif
