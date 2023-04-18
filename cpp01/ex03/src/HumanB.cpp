/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:30:45 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/10 16:04:53 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name){

    this->_name = name;
    _weapon = NULL;
	std::cout << "Wild " << _name << " appeared" << std::endl;
}

HumanB::~HumanB(void){

	std::cout << _name << " Fainted" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {

    _weapon = &weapon;
}

 void    HumanB::attack(void) {

     if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
 }