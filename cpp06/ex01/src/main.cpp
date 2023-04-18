/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:31:41 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/15 15:41:02 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {

    Data        *data;
    uintptr_t   serialized;
    Data        *data2;
    
    data = new Data;
    data->str = "Test for science";
    data->i = 42;
    data->f = 42.42f;
    data->d = 42.42;

    std::cout << "=========INIT VALUE=========" << std::endl;
    std::cout << "string : " << data->str << std::endl;
    std::cout << "int : " << data->i << std::endl;
    std::cout << "float : " << data->f << "f" << std::endl;
    std::cout << "double : " << data->d << std::endl;
    std::cout << "adress : " << data << std::endl;
   
    serialized = Serializer::serialize(data);

    std::cout << "=========SERIALIZE=========" << std::endl;
    std::cout << "adress : " << &serialized << std::endl;
   
    data2 = Serializer::deserialize(serialized);

    std::cout << "=========DESERIALIZE=========" << std::endl;
    std::cout << "string : " << data2->str << std::endl;
    std::cout << "int : " << data2->i << std::endl;
    std::cout << "float : " << data2->f << "f" << std::endl;
    std::cout << "double : " << data2->d << std::endl;
    std::cout << "adress : " << data2 << std::endl;

    delete data;
}