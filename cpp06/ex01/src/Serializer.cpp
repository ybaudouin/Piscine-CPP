/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:03:29 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/15 15:18:35 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

Serializer::Serializer(){

    std::cout << "Class Serializer was created !" << std::endl;
}

Serializer::Serializer(const Serializer &copy){(void)copy;}

Serializer::~Serializer(){

    std::cout << "Class Serializer was destroyed !" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


Serializer &Serializer::operator=(const Serializer &copy){

    std::cout << "Assignment operator Serializer called" << std::endl;
    (void)copy;
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                GETTER && SETTER                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                               EXCEPTION                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                 FUNCTIONS                                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

uintptr_t Serializer::serialize(Data *ptr) {

    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {

    return reinterpret_cast<Data*>(raw);
}