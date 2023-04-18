/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:03:34 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/16 13:57:41 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>
#include <stdint.h>

struct Data {

    std::string str;
    int         i;
    float       f;
    double      d;
  
};

class Serializer {

public :

    Serializer(const Serializer &copy);
    ~Serializer();
    Serializer  &operator=(const Serializer &copy);

    static uintptr_t serialize(Data *ptr);
    static Data    *deserialize(uintptr_t raw);

protected :
  
private :

    Serializer();
  
};
#endif