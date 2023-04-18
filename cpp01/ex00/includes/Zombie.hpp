/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:19:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/12 16:06:38 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <stdlib.h>
#include <iostream>

class Zombie {

public :

    Zombie(const std::string name);
    ~Zombie(void);
    void    announce();

private :

std::string _name;
};

Zombie  *newZombie(const std::string name);
void	randomChump(const std::string name);

#endif