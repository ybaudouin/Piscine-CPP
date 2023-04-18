/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:00:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/07 15:53:54 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>

class WrongAnimal {

public :

    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    virtual ~WrongAnimal();
    
    WrongAnimal     &operator=(const WrongAnimal &copy);
    std::string     getType(void) const;
    void            setType(const std::string &type);
    void            makeSound() const;

protected :

    std::string type;
  
private :

};

#endif