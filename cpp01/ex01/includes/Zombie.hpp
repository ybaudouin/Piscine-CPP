/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:20:03 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/12 16:14:57 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <stdlib.h>
#include <iostream>

class Zombie {

public :

    Zombie(const std::string name);
    Zombie(void);
    ~Zombie(void);
    void    announce();
    void	setName(const std::string name);

private :

    std::string _name;
};

Zombie *zombieHorde( int N, const std::string name );

#endif