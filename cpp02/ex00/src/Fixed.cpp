/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:30:01 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/03 11:30:02 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0){

    std::cout << "Default constructor called" << std::endl;
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

int Fixed::getRawBits() const {

    std::cout << "getRawBits member function called" << std::endl;
    return (_nbr);
}

void Fixed::setRawBits( int const raw ){

    _nbr = raw;
}