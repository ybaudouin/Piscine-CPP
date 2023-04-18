/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:52:18 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/06 09:18:59 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void){

    ClapTrap    a("R2D2");
    ClapTrap    b(a);
    ClapTrap    c = b;
    ClapTrap    d("Z6PO");

    a.attack("Z6PO");
    d.takeDamage(0);
    b.attack("c");
    c.takeDamage(0);
    d.attack("R2D2");
    a.takeDamage(0);
    a.takeDamage(5);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
    a.beRepaired(1);
}