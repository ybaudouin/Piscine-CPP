/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:52:14 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/06 09:06:51 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public :

    ClapTrap(const ClapTrap &copy);
    ClapTrap(std::string name);
    ~ClapTrap();
    
    ClapTrap &operator=(const ClapTrap &copy);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private :

    ClapTrap();
    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;
};

#endif