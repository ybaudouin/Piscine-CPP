/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:24:39 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/08 10:41:14 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){

    std::cout << YELLOW "Opening of the new animal center !" END << std::endl;
    type = "Animal";
    
}

Animal::Animal(const Animal &copy){

    std::cout << "Copy constructor of Animal class" << std::endl;
    type = copy.type;
}

Animal &Animal::operator=(const Animal &copy){

    if (this == &copy)
        return (*this);
    std::cout << "Assignment operator Animal called" << std::endl;
    type = copy.type;
    return (*this);

}

Animal::~Animal(){

    std::cout << YELLOW "Thank you for your visit the center is closed" END << std::endl;
}

void    Animal::setType(const std::string &type) {

    this->type = type;
}

std::string   Animal::getType(void) const {

    return (type);
}

void    Animal::makeSound() const {

    std::cout << YELLOW "ANIMAL !!! " END << std::endl;

}