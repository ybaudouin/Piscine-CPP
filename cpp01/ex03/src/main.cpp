/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:12:12 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/10 16:15:44 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(){

{
    Weapon club = Weapon("Blast Burn");

    HumanA bob("Charizard", club);
    bob.attack();
    club.setType("Flamethrower");
    bob.attack();
}

{
    Weapon club = Weapon("Splash");
    
    HumanB jim("Magikarp");
    jim.setWeapon(club);
    jim.attack();
    club.setType("Tackle");
    jim.attack();
}
}