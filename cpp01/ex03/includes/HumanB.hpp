/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:27:08 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/10 15:54:49 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.hpp"

class HumanB {

public :

     HumanB(const std::string &name);
	~HumanB(void);

    void    setWeapon(Weapon &weapon);
    void    attack(void);
 
private :

    Weapon  *_weapon;
    std::string _name;

};

#endif