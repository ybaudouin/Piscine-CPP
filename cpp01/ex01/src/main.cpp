/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:20:10 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/10 10:20:11 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	size;

	size = 20;
	Zombie *horde = zombieHorde(size, "Sylvain");
	for (int i = 0; i < size; ++i)
		horde[i].announce();
	delete [] horde;
}