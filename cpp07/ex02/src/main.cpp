/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:57:26 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/21 15:35:15 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {

    Array<int>  arr_empty;
    Array<int>  arr_full(5);

    arr_full[0] = 2;
    arr_full[1] = 4;
    arr_full[2] = 6;
    arr_full[3] = 8;
    arr_full[4] = 10;

    std::cout << "=========INT ARRAY=========" << std::endl;
    std::cout << "" << std::endl;
    try {
        std::cout << arr_full[0] << std::endl;
        std::cout << arr_full[1] << std::endl;
        std::cout << arr_full[2] << std::endl;
        std::cout << arr_full[3] << std::endl;
        std::cout << arr_full[4] << std::endl;
        std::cout << arr_full[5] << std::endl;
    }
    catch (const std::exception &e){

        std::cout << e.what() << std::endl;
    }
    arr_full.size();

    Array<std::string>  arr_str(3);

    arr_str[0] = "Hello";
    arr_str[1] = "World";
    arr_str[2] = "!!!";

    std::cout << "" << std::endl;
    std::cout << "=========STRING ARRAY=========" << std::endl;
    std::cout << "" << std::endl;

     try {
        std::cout << arr_str[0] << std::endl;
        std::cout << arr_str[1] << std::endl;
        std::cout << arr_str[2] << std::endl;
        std::cout << arr_str[3] << std::endl;
    }
    catch (const std::exception &e){

        std::cout << e.what() << std::endl;
    }
    arr_str.size();

    std::cout << "" << std::endl;
    std::cout << "=========COPY CONSTRUCTOR=========" << std::endl;
    std::cout << "" << std::endl;

    Array<std::string>  arr_str_cpy(arr_str);

    try {
        std::cout << arr_str_cpy[0] << std::endl;
        std::cout << arr_str_cpy[1] << std::endl;
        std::cout << arr_str_cpy[2] << std::endl;
        std::cout << arr_str_cpy[3] << std::endl;
    }
    catch (const std::exception &e){

        std::cout << e.what() << std::endl;
    }
    arr_str_cpy.size();
    arr_str[0] = "It's";
    arr_str[1] = "a small";
    arr_str[2] = "world !";

    std::cout << "" << std::endl;
    std::cout << "=========OPERATOR=========" << std::endl;
    std::cout << "" << std::endl;
    
    arr_str_cpy = arr_str;
    try {
        std::cout << arr_str_cpy[0] << std::endl;
        std::cout << arr_str_cpy[1] << std::endl;
        std::cout << arr_str_cpy[2] << std::endl;
        std::cout << arr_str_cpy[3] << std::endl;
    }
    catch (const std::exception &e){

        std::cout << e.what() << std::endl;
    }
    arr_str_cpy.size();

}