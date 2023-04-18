/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:28:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/07 12:28:20 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{

public :

    Dog();
    Dog(const Dog &copy);
    ~Dog();
    
    Dog     &operator=(const Dog &copy);
    void    makeSound() const;

protected :

private :


};

#endif