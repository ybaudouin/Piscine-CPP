/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:29:55 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/03 11:30:05 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public :

    Fixed();
    Fixed(const Fixed &src);
    ~Fixed();

    Fixed &operator=(const Fixed &src);
    int getRawBits() const;
    void setRawBits( int const raw );

private :

    int _nbr;
    static const int RawBits = 8;
};

#endif
