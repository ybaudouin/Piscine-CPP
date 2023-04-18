/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:20:15 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/12 16:15:38 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std:: string name){

    _name = name;
    std::cout << _name << " successful mutation !" << std::endl;

}

Zombie::Zombie(void){

  
    std::cout << "successful mutation of a new zombie !" << std::endl;

}

Zombie::~Zombie(void){

    std::cout << _name << " has been absorbed by the Black Hole." << std::endl;

}

void    Zombie::announce(void){

    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}

void    Zombie::setName(const std::string name){
	
    _name = name;
}