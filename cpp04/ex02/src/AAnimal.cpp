/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:24:39 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 13:57:26 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){

    std::cout << YELLOW "Opening of the new Animal center !" END << std::endl;
    type = "Animal";
    
}

AAnimal::AAnimal(const AAnimal &copy){

    std::cout << "Copy constructor of Animal class" << std::endl;
    type = copy.type;
}

AAnimal &AAnimal::operator=(const AAnimal &copy){

    if (this == &copy)
        return (*this);
    std::cout << "Assignment operator Animal called" << std::endl;
    type = copy.type;
    return (*this);

}

AAnimal::~AAnimal(){

    std::cout << YELLOW "Thank you for your visit the center is closed" END << std::endl;
}

void    AAnimal::setType(const std::string &type) {

    this->type = type;
}

std::string   AAnimal::getType(void) const {

    return (type);
}

void    AAnimal::makeSound() const {

    std::cout << YELLOW "ANIMAL !!! " END << std::endl;

}