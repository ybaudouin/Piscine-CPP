/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:20:27 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/12 16:10:07 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, const std::string name){

    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; ++i){
	    horde[i].setName(name);
    }
	return (horde);
}