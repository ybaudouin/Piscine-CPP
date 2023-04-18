/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:21:52 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 11:51:52 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){

	for (int i = 0; i < 100; i++)
		_ideas[i] = "BrainzzzzzzzzzZ";
	std::cout << "A brain has been constructed and filled with ideas" << std::endl;
    
}

Brain::Brain(const Brain &copy){

    std::cout << "Copy constructor of Brain class" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain &copy){

    if (this == &copy)
        return (*this);
    std::cout << "Assignment operator Brain called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = copy._ideas[i];
    return (*this);
}

void    Brain::setIdeas(const std::string &ideas){

    for (int i = 0; i < 100; i++)
        _ideas[i] = ideas;
}

std::string   *Brain::getIdeas(void) {

        return (_ideas);
}

Brain::~Brain(){

    std::cout << "Good night the brain rests" << std::endl;
}