/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:18:44 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 14:07:39 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>

class AAnimal {

public :

    AAnimal();
    AAnimal(const AAnimal &copy);
    virtual ~AAnimal();
    
    AAnimal          &operator=(const AAnimal &copy);
    std::string     getType(void) const;
    void            setType(const std::string &type);
    virtual void    makeSound() const = 0;

protected :

    std::string type;
  
private :

};


#endif