/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:52:18 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/06 13:33:04 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void){

    ClapTrap    a(BLUE "R2D2" END);
    ClapTrap    b(a);
    ClapTrap    c = b;
    ClapTrap    d(YELLOW "Z6PO" END);
    
    ScavTrap    z(RED "DARTH VADER" END);
    ScavTrap    x(z);
    ScavTrap    w = x;
    ScavTrap    y(PURPLE "LUKE" END);

    a.attack(YELLOW "Z6PO" END);
    d.takeDamage(0);
    z.attack(PURPLE "LUKE" END);
    y.takeDamage(20);
    y.guardGate();
    b.attack("c");
    c.takeDamage(0);
    d.attack(BLUE "R2D2" END);
    x.attack("w");
    c.takeDamage(0);
    a.takeDamage(0);
    a.takeDamage(5);
    a.beRepaired(1);
    y.attack(RED "DARTH VADER" END);
    z.takeDamage(20);
    y.beRepaired(8);
}