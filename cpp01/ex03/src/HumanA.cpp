/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:30:31 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/10 15:55:37 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &type){

    this->_name = name ;
    this->_weapon = &type;
	std::cout << "Wild " << _name << " appeared" << std::endl;
}

HumanA::~HumanA(void){

	std::cout << _name << " Fainted" << std::endl;
}

 void    HumanA::attack(void) {

     std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
 }