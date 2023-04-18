/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:28:21 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/06 14:37:48 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){

    std::cout << "Initialization of FragTrap" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &copy){

    std::cout << "Copy Assignment operator called" << std::endl;
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return (*this);
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy._name){

    std::cout << "initialization of FragTrap" << std::endl;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
}

FragTrap::~FragTrap() {

    std::cout << "Destruction of FragTrap" << std::endl;
}

void    FragTrap::attack(const std::string& target){

    if (_energy_points != 0) {

        std::cout << "["<< _name  << "] draws his blaster and shoots " << target << ", the amount of damage inflicted is " << _attack_damage << " point(s) of damage !" << std::endl;
        _energy_points--;
        std::cout << "["<< _name  << "] " << _energy_points << " energy points remaining" << std::endl;
    }
    else
        std::cout << "["<< _name  << "] is out of energy" << std::endl;
}

void FragTrap::highFivesGuys(){

    std::cout << "["<< _name  << "] wish to give you highFives" << std::endl;
}