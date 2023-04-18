/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:18:40 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/10 15:57:01 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <iostream>

class Weapon {

public :

    Weapon(const std::string &type);
	~Weapon(void);
    const std::string  &getType(void);
    void                setType(const std::string &type);
  
private :

    std::string _type;

};

#endif