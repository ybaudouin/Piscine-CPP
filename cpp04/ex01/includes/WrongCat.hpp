/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:10:25 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/07 15:40:04 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public :

    WrongCat();
    WrongCat(const WrongCat &copy);
    ~WrongCat();
    
    WrongCat    &operator=(const WrongCat &copy);
    void        makeSound() const;

protected :

private :

};

#endif