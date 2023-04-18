/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:26:55 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/10 15:55:01 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

public :

    HumanA(const std::string &name,Weapon &type);
	~HumanA(void);
    void    attack(void);

private :

    std::string _name;
    Weapon  *_weapon;

};

#endif