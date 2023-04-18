/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:33:19 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/07 12:19:37 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){

    std::cout << GREEN "Arrived from a new cat in the center" END << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(){

    std::cout << "Copy constructor of Cat class" << std::endl;
    type = copy.type;
}

Cat &Cat::operator=(const Cat &copy){

    std::cout << "Assignment operator for Cat called" << std::endl;
    type = copy.type;
    return (*this);

}

Cat::~Cat(){

    std::cout << GREEN "there are no more cats available. Try another time" END << std::endl;
}

void    Cat::makeSound() const{

    std::cout << GREEN "MEOWWWWWWW ! " END << std::endl;
    std::cout << "   /\\_/\\ " << std::endl;
    std::cout << " =( °w° )= " << std::endl;
    std::cout << "   )   (  // " << std::endl;
    std::cout << "  (__ __)// " << std::endl;
    
}