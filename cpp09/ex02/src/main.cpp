/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:35:40 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/04/14 14:52:06 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int argc, char **argv) {

    PmergeMe            input(argc, argv);
    std::vector<int>    final_array_vector;
    PmergeMe            input_1(argc, argv);
    std::deque<int>     final_array_deque;
    clock_t             start_1;
    clock_t             start_2;
    clock_t             end_1;
    clock_t             end_2;

    if (argc < 2) {
        std::cout << RED << "Error: " << END << "bad input." << std::endl;
        exit (1);
    }
    start_1 = clock();
    input.split_array(input.get_vect(), 0, input.get_vect().size() - 1, final_array_vector);
    end_1 = clock();
    start_2 = clock();
    input_1.split_array_deque(input_1.get_deque(), 0, input_1.get_deque().size() - 1, final_array_deque);
    end_2 = clock();
    input.print_result(final_array_vector);
    double cpu_time_used_1 = (double(end_1 - start_1)  / CLOCKS_PER_SEC);
    std::cout << CYAN << "Time to process a range of " << input.get_vect().size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << cpu_time_used_1 << " us" << std::endl;
    double cpu_time_used_2 = (double(end_2 - start_2)  / CLOCKS_PER_SEC);
    std::cout << CYAN << "Time to process a range of " << input.get_deque().size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << cpu_time_used_2 << " us" << std::endl;
}