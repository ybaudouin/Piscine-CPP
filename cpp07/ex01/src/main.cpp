/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:53:17 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/17 16:14:39 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

template <typename T>
void iter(T *array, size_t size , void(*function)(T&)) {
    for (long unsigned int i = 0; i < size ; i++)
        function(array[i]);
}

template <typename T>
void print(T &index) {

    std::cout << index << std::endl;
}


int main () {

    std::cout << "=========TYPE INT=========" << std::endl;
    std::cout << "" << std::endl;
    int array [] = {1,2,3,4,5,6,7,8,9};
    size_t size_1 = 9;
    iter(array, size_1, print);
    std::cout << "" << std::endl;
    std::cout << "=========TYPE STRING=========" << std::endl;
    std::cout << "" << std::endl;
    std::string array_string[] = {"I", "just", "can't", "wait", "to", "be", "king" };
    size_t size_2 = 7;
    iter(array_string, size_2, print);
    std::cout << "" << std::endl;
    std::cout << "=========TYPE CHAR=========" << std::endl;
    std::cout << "" << std::endl;
    char array_char[] = {'Z', 'O', 'O', 'L'};
    size_t size_3 = 4;
    iter(array_char, size_3, print);
    std::cout << "" << std::endl;
}