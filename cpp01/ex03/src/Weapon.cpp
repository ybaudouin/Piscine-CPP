/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:34:29 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/10 15:58:33 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon(void) {
        
        std::cout << "Weapon destroyed !" << std::endl;
}

Weapon::Weapon(const std::string &type) {

    this->_type = type;
    std::cout << "Weapon activated !" << std::endl;
}
void    Weapon::setType(const std::string &type) {

    _type = type;
}

const std::string   &Weapon::getType(void) {

    return (_type);
}