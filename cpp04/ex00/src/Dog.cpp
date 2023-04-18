/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:39:59 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/07 12:28:33 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(){

    std::cout << CYAN "Arrived from a new Dog in the center" END << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(){

    std::cout << "Copy constructor of Dog class" << std::endl;
    type = copy.type;
}

Dog &Dog::operator=(const Dog &copy){

    std::cout << "Assignment operator for Dog called" << std::endl;
    type = copy.type;
    return (*this);

}

Dog::~Dog(){

    std::cout << CYAN "there are no more Dogs available. Try another time" END << std::endl;
}

void    Dog::makeSound() const{

    std::cout << CYAN "WOUFFFFF ! " END << std::endl;
    std::cout << "       __" << std::endl;
    std::cout << "  (___()'`;" << std::endl;
    std::cout << "  /,    /`" << std::endl;
    std::cout << "  \\\\ --\\\\" << std::endl;
    
}