/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:28:32 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/07 12:19:48 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{

public :

    Cat();
    Cat(const Cat &copy);
    ~Cat();
    
    Cat &operator=(const Cat &copy);
    void        makeSound() const;

protected :

private :

};

#endif