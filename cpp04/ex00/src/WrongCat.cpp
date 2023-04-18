/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:16:28 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/07 15:23:57 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(){

    std::cout << GREEN "Arrived from a new WrongCat in the center" END << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(){

    std::cout << "Copy constructor of WrongCat class" << std::endl;
    type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){

    std::cout << "Assignment operator for WrongCat called" << std::endl;
    type = copy.type;
    return (*this);

}

WrongCat::~WrongCat(){

    std::cout << GREEN "there are no more WrongCats available. Try another time" END << std::endl;
}

void    WrongCat::makeSound() const{

    std::cout << GREEN " WRONGGGGMEOWWWWWWWW " END << std::endl;
    
}