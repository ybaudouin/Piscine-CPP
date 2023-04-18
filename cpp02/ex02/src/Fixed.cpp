/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:45:19 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/03 11:20:10 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0){

   // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float nbr){

 //   std::cout << "Float constructor called" << std::endl;
    _nbr = roundf(nbr * (1 << RawBits));
}

Fixed::Fixed(const int nbr){

 //   std::cout << "Int constructor called" << std::endl;
    _nbr = (nbr << RawBits);
}

Fixed::Fixed(const Fixed &src){

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(){

//    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &src){

  //  std::cout << "Copy Assignment operator called" << std::endl;
    _nbr = src.getRawBits();
    return (*this);
}

std::ostream    &operator<<(std::ostream &os, const Fixed &src){

    std::cout << src.toFloat();
    return (os);
}

int Fixed::getRawBits() const {

    return (_nbr);
}

void    Fixed::setRawBits( int const raw ){

    _nbr = raw;
}

int Fixed::toInt( void ) const{

    return (_nbr >> RawBits);
}

float   Fixed::toFloat( void ) const{

    return ((float)_nbr / (1 << RawBits));
}

                            ///ARITHMETIC OPERATORS///                           


Fixed   Fixed::operator+(const Fixed &src){

    Fixed   res;
    
    res._nbr = _nbr + src.getRawBits();    
    return (res);
}

Fixed   Fixed::operator-(const Fixed &src){

    Fixed res;
    
    res._nbr = _nbr - src.getRawBits();
    return (res);
}

Fixed   Fixed::operator/(const Fixed &src){

    Fixed res(toFloat() / src.toFloat());
    return (res);
}

Fixed   Fixed::operator*(const Fixed &src){

    Fixed res((float)(_nbr * src.getRawBits()) / ((1 << RawBits) * (1 << src.RawBits)));
    return (res);
}

                            ///COMPARISON OPERATORS///

bool    Fixed::operator>( const Fixed &src ) const{
    
    return (getRawBits() > src.getRawBits());
}

bool    Fixed::operator<( const Fixed &src ) const{
    
    return (getRawBits() < src.getRawBits());
}

bool    Fixed::operator>=( const Fixed &src ) const{
    
    return (getRawBits() >= src.getRawBits());
}

bool    Fixed::operator<=( const Fixed &src ) const{
    
    return (getRawBits() <= src.getRawBits());
}

bool    Fixed::operator==( const Fixed &src ) const{
    
    return (getRawBits() == src.getRawBits());
}

bool    Fixed::operator!=( const Fixed &src ) const{
    
    return (getRawBits() != src.getRawBits());
}

                            ///MAX & MIN///
 
Fixed &Fixed::min(Fixed &a, Fixed &b){

    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
 }

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){

    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
 }

 Fixed &Fixed::max(Fixed &a, Fixed &b){

    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
 }

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){

    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
 }

                            ///INCREMENT OPERATORS///

Fixed   Fixed::operator++(void){

    this->_nbr++;
    return (*this);
}

const Fixed   Fixed::operator++(int){

    const Fixed temp(this->toFloat());
    ++(*this);
    return (temp);
}

Fixed   Fixed::operator--(void){

    this->_nbr--;
    return (*this);
}

const Fixed   Fixed::operator--(int){

    const Fixed temp(this->toFloat());
    --(*this);
    return (temp);
}