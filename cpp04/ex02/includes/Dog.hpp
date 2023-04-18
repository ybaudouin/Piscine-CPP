/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:28:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 13:58:58 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{

public :

    Dog();
    Dog(const Dog &copy);
    ~Dog();
    
    Dog     &operator=(const Dog &copy);
    void    makeSound() const;
    Brain   *getBrain(void);

protected :

private :

    Brain   *_brain;

};

#endif