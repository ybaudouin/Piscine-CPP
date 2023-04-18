/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:16:06 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/27 09:12:30 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << YELLOW << "=========ADD NUMBER=========" << END << std::endl;
    std::cout << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    int array [10000];
    
    for (int i = 0; i < 10000; i++)
        array[i] = i;
    Span sp2 = Span(1000);
    Span sp3 = Span(10000);
    std::cout << YELLOW << "=========TRY TO INSERT NUMBERS IN A SMALLER ARRAY========= " << END << std::endl;
    std::cout << std::endl;
    try {

        sp2.addNumbers(array, &array[10000]);
    }
    catch (const std::exception &e){

        std::cout << RED << e.what() << END << std::endl;
    }
    sp3.addNumbers(array, &array[10000]);
    std::cout << std::endl;
    std::cout << YELLOW << "=========ADD NUMBERS=========" << END << std::endl;
    std::cout << std::endl;
    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;
    std::cout << std::endl;
    return 0;
}