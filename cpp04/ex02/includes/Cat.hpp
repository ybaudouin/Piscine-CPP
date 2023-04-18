/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:28:32 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 14:00:10 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{

public :

    Cat();
    Cat(const Cat &copy);
    ~Cat();
    
    Cat     &operator=(const Cat &copy);
    void    makeSound() const;
    Brain   *getBrain(void);

protected :

private :

    Brain   *_brain;
};

#endif