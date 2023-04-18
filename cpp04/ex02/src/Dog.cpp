/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:39:59 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 14:20:45 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){

    std::cout << CYAN "Arrived from a new Dog in the center" END << std::endl;
    type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog &copy) : AAnimal(copy){

    std::cout << "Copy constructor of Dog class" << std::endl;
    type = copy.type;
    _brain = new Brain();
    for (int i = 0; i < 100; i++)
        _brain->getIdeas()[i] = copy._brain->getIdeas()[i];
}

Dog &Dog::operator=(const Dog &copy){

    if (this == &copy)
        return (*this);
    std::cout << "Assignment operator for Dog called" << std::endl;
    type = copy.type;
    delete (_brain);
    _brain = new Brain();
    for (int i = 0; i < 100; i++)
        _brain->getIdeas()[i] = copy._brain->getIdeas()[i];
    return (*this);
}

Brain   *Dog::getBrain(void) {

        return (_brain);
}

Dog::~Dog(){

    std::cout << CYAN "there are no more Dogs available. Try another time" END << std::endl;
    delete (_brain);
}

void    Dog::makeSound() const{

    std::cout << CYAN "WOUFFFFF ! " END << std::endl;
    std::cout << "       __" << std::endl;
    std::cout << "  (___()'`;" << std::endl;
    std::cout << "  /,    /`" << std::endl;
    std::cout << "  \\\\ --\\\\" << std::endl;
    
}