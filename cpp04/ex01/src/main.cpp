/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:43:15 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 11:51:30 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

Dog	*j = new Dog();
Cat	*i = new Cat();
Dog	k;
Cat	l;
Dog	m(*j);
Cat	n(*i);

k = *j;
l = *i;

for (int p = 0; p < 10 ; p++)
	std::cout << GREEN "Cat idea number " << p << " : "  END << i->getBrain()->getIdeas()[p] << std::endl;
for (int r = 0; r < 10 ; r++)
	std::cout << CYAN "Dog idea number " << r << " : " END << j->getBrain()->getIdeas()[r] << std::endl;

Animal	*array_animal[10];

for (int z = 0; z < 10; z++){

	if (z % 2)
		array_animal[z] = new Cat();
	else
		array_animal[z] = new Dog();
}
for (int z = 0; z < 10; z++){

	delete array_animal[z];
}
delete j;
delete i;
return (0);
}