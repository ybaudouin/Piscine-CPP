/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:41:09 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/23 11:54:04 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

    std::list<int>  lst1;

    lst1.push_back(1);
    lst1.push_back(15);
    lst1.push_back(17);
    lst1.push_back(42);

    try {
        easyfind(lst1, 42);
    }
    catch (const std::exception &e) {
        
        std::cout << e.what() << std::endl;
    }
     try {
        easyfind(lst1, 69);
    }
    catch (const std::exception &e) {

        std::cout << e.what() << std::endl;
    }

    std::vector<int>    lst2;

    lst2.push_back(10);
    lst2.push_back(20);
    lst2.push_back(30);
    lst2.push_back(40);
    lst2.push_back(50);
    lst2.push_back(60);
    lst2.push_back(70);
    lst2.push_back(80);
    lst2.push_back(90);

    try {
        easyfind(lst2, 10);
    }
    catch (const std::exception &e) {
        
        std::cout << e.what() << std::endl;
    }
     try {
        easyfind(lst2, 40);
    }
    catch (const std::exception &e) {

        std::cout << e.what() << std::endl;
    }
    try {
        easyfind(lst2, 70);
    }
    catch (const std::exception &e) {
        
        std::cout << e.what() << std::endl;
    }
     try {
        easyfind(lst2, 100);
    }
    catch (const std::exception &e) {

        std::cout << e.what() << std::endl;
    }
}