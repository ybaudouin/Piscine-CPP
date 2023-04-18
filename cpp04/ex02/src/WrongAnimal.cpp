/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:12:53 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/08 10:38:24 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

    std::cout << RED "Opening of the new WrongAnimal center !" END << std::endl;
    type = "WrongAnimal";
    
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){

    std::cout << "Copy constructor of WrongAnimal class" << std::endl;
    type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){

    if (this == &copy)
        return (*this);
    std::cout << "Assignment operator WrongAnimal called" << std::endl;
    type = copy.type;
    return (*this);

}

WrongAnimal::~WrongAnimal(){

    std::cout << RED "Thank you for your visit the center is closed" END << std::endl;
}

void    WrongAnimal::setType(const std::string &type) {

    this->type = type;
}

std::string   WrongAnimal::getType(void) const {

    return (type);
}

void    WrongAnimal::makeSound() const {

    std::cout << RED "WRONGANIMAL !!! " END << std::endl;

}