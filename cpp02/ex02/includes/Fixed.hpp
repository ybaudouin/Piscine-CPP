/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:45:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/03 11:12:21 by ybaudoui         ###   ########.fr       */
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

    Fixed       &operator=(const Fixed &src);
    Fixed       operator+(const Fixed &src);
    Fixed       operator-(const Fixed &src);
    Fixed       operator/(const Fixed &src);
    Fixed       operator*(const Fixed &src);
    Fixed       operator++();
    const Fixed operator++(int);
    Fixed       operator--();
    const Fixed operator--(int);
    bool        operator>(const Fixed &src) const;
    bool        operator<(const Fixed &src) const;
    bool        operator>=(const Fixed &src) const;
    bool        operator<=(const Fixed &src) const;
    bool        operator==(const Fixed &src) const;
    bool        operator!=(const Fixed &src) const;
    int         getRawBits() const;
    void        setRawBits( int const raw );
    float       toFloat( void ) const;
    int         toInt( void ) const;

    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

private :

    int                 _nbr;
    static const int    RawBits = 8;
    
};

std::ostream &operator<<(std::ostream &os, const Fixed &src);

#endif
