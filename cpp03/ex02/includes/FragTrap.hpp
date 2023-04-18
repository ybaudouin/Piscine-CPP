/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:15:02 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/06 14:27:59 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public :

    FragTrap(const FragTrap &copy);
    FragTrap(std::string name);
    FragTrap &operator=(const FragTrap &copy);
    ~FragTrap();
    
    void highFivesGuys();
    void attack(const std::string& target);

private :

    FragTrap();

};

#endif