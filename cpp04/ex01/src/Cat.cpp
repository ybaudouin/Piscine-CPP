/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:33:19 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 11:51:56 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){

    std::cout << GREEN "Arrived from a new cat in the center" END << std::endl;
    type = "Cat";
    _brain = new Brain(); 
}

Cat::Cat(const Cat &copy) : Animal(){

    std::cout << "Copy constructor of Cat class" << std::endl;
    type = copy.type;
    _brain = new Brain();
    for (int i = 0; i < 100; i++)
        _brain->getIdeas()[i] = copy._brain->getIdeas()[i];
}

Cat &Cat::operator=(const Cat &copy){

    if (this == &copy)
        return (*this);
    std::cout << "Assignment operator for Cat called" << std::endl;
    type = copy.type;
    delete (_brain);
    _brain = new Brain();
    for (int i = 0; i < 100; i++)
        _brain->getIdeas()[i] = copy._brain->getIdeas()[i];
    return (*this);

}

Brain   *Cat::getBrain(void) {

        return (_brain);
}

Cat::~Cat(){

    std::cout << GREEN "there are no more cats available. Try another time" END << std::endl;
    delete (_brain);
}

void    Cat::makeSound() const{

    std::cout << GREEN "MEOWWWWWWW ! " END << std::endl;
    std::cout << "   /\\_/\\ " << std::endl;
    std::cout << " =( °w° )= " << std::endl;
    std::cout << "   )   (  // " << std::endl;
    std::cout << "  (__ __)// " << std::endl;
    
}