/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:08:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/06 12:38:26 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public :

    ScavTrap(const ScavTrap &copy);
    ScavTrap(std::string name);
    ScavTrap &operator=(const ScavTrap &copy);
    ~ScavTrap();
    
    void guardGate();
    void attack(const std::string& target);

private :

    ScavTrap();

};

#endif