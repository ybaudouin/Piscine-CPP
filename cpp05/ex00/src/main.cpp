/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:57:25 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/16 13:42:29 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(){

    try {
        
        Bureaucrat  dad_2("Zool", -1);
    }
    catch (const std::exception &e){

        std::cout << e.what() << std::endl;
    }
    try {
        
        Bureaucrat  dad_2("Zool", 1);
    }
    catch (const std::exception &e){

        std::cout << e.what() << std::endl;
    }
    Bureaucrat  dad_2("Zool", 1);
    Bureaucrat  mom_1("Boo", 1);
    Bureaucrat  teenagers_1("Ninouche", 150);
    Bureaucrat  teenagers_2("Maelou", 75);
    Bureaucrat  kids("Eden", 150);

    std::cout << YELLOW << dad_2 << END << std::endl;
    std::cout << PURPLE << mom_1 << END << std::endl;
    std::cout << CYAN << teenagers_1 << END << std::endl;
    std::cout << RED << teenagers_2 << END << std::endl;
    std::cout << GREEN << kids << END << std::endl;

    try {
        teenagers_1.downGrade();
    }
    catch (const std::exception &e){

        std::cout << e.what() << std::endl;
    }
    try {
        teenagers_2.upGrade();
    }
    catch (const std::exception &e){

        std::cout << e.what() << std::endl;
    }
    std::cout << CYAN << teenagers_1 << END << std::endl;
    std::cout << CYAN << teenagers_2 << END << std::endl;
}
