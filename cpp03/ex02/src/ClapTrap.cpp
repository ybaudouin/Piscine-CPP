/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:52:21 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/06 12:10:20 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const ClapTrap &copy){

    std::cout << "initialization of ClapTrap" << std::endl;
    _name = copy._name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
}

ClapTrap::ClapTrap(std::string name) {

    std::cout << "Initialization of ClapTrap" << std::endl;
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::~ClapTrap() {

    std::cout << "Destruction of ClapTrap" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){

    std::cout << "Copy Assignment operator called" << std::endl;
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return (*this);
}

void    ClapTrap::attack(const std::string& target){

    if (_energy_points != 0) {

        std::cout << "["<< _name  << "] attacks " << target << ", causing " << _attack_damage << " point(s) of damage !" << std::endl;
        _energy_points--;
        std::cout << "["<< _name  << "] " << _energy_points << " energy points remaining" << std::endl;
    }
    else
        std::cout << "["<< _name  << "] is out of energy" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){

    std::cout << "["<< _name  << "] take " << amount << " damage !" << std::endl;
    _hit_points -= amount;
    std::cout << "["<< _name  << "] loses " << amount << " life points !" << std::endl;
    std::cout << "["<< _name  << "] " << _hit_points << " life points remaining" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){

    if (_energy_points != 0) {

        std::cout << "["<< _name  << "] launch its repair for " << amount << " point(s) !" << std::endl;
        _energy_points--;
        _hit_points += amount;
        std::cout << "["<< _name  << "] " << _energy_points << " energy points remaining" << std::endl;
        std::cout << "["<< _name  << "] " << _hit_points << " life points remaining" << std::endl;
    }
    else
        std::cout << "["<< _name  << "] is out of energy" << std::endl;
}