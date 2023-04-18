/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:18:44 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/07 16:08:06 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>

class Animal {

public :

    Animal();
    Animal(const Animal &copy);
    virtual ~Animal();
    
    Animal          &operator=(const Animal &copy);
    std::string     getType(void) const;
    void            setType(const std::string &type);
    virtual void    makeSound() const;

protected :

    std::string type;
  
private :


};

#endif