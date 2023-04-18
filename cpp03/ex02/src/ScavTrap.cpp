/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:55:07 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/06 12:50:46 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){

    std::cout << "Initialization of ScavTrap" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){

    std::cout << "Copy Assignment operator called" << std::endl;
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy._name){

    std::cout << "initialization of ScavTrap" << std::endl;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
}

ScavTrap::~ScavTrap() {

    std::cout << "Destruction of ScavTrap" << std::endl;
}

void    ScavTrap::attack(const std::string& target){

    if (_energy_points != 0) {

        std::cout << "["<< _name  << "] takes out his saber to attack " << target << ", he inflicts on him " << _attack_damage << " point(s) of damage !" << std::endl;
        _energy_points--;
        std::cout << "["<< _name  << "] " << _energy_points << " energy points remaining" << std::endl;
    }
    else
        std::cout << "["<< _name  << "] is out of energy" << std::endl;
}

void ScavTrap::guardGate(){

    std::cout << "["<< _name  << "] enter in Gate Keeper mode" << std::endl;
}