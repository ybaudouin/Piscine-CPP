/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:45:19 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/21 09:14:16 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0){

    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float nbr){

    std::cout << "Float constructor called" << std::endl;
    _nbr = roundf(nbr * (1 << RawBits));
}

Fixed::Fixed(const int nbr){

    std::cout << "Int constructor called" << std::endl;
    _nbr = (nbr << RawBits);
}

Fixed::Fixed(const Fixed &src){

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(){

    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &src){

    std::cout << "Copy Assignment operator called" << std::endl;
    _nbr = src.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream &os, const Fixed &src){

    std::cout << src.toFloat();
    return (os);
}

int Fixed::getRawBits() const {

    return (_nbr);
}

void Fixed::setRawBits( int const raw ){

    _nbr = raw;
}

float Fixed::toFloat( void ) const{

    return ((float)_nbr / (1 << RawBits));
}

int Fixed::toInt( void ) const{

    return (_nbr >> RawBits);
}