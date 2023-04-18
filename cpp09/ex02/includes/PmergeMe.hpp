/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:35:20 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/04/14 14:45:17 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <iomanip>

class PmergeMe {

public :

    
    PmergeMe();
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &copy);
    ~PmergeMe();
    PmergeMe(int argc, char **argv);
    
    //*********VECTOR********//

    void                split_array(std::vector<int> input, int start, int end, std::vector<int> &final_array);
    void                sort_array_left(std::vector<int> &array_left);
    void                sort_array_right(std::vector<int> &array_right);
    void                merge_left_and_right(std::vector<int> &array_left, std::vector<int> &array_right, std::vector<int> &final_array);
    std::vector<int>    get_vect();

    //*********DEQUE********//

    void                split_array_deque(std::deque<int> input, int start, int end, std::deque<int> &final_array);
    void                sort_array_left_deque(std::deque<int> &array_left);
    void                sort_array_right_deque(std::deque<int> &array_right);
    void                merge_left_and_right_deque(std::deque<int> &array_left, std::deque<int> &array_right, std::deque<int> &final_array);
    std::deque<int>     get_deque();
    
    //*********PRINT********//

    void                print_result(std::vector<int> &final_array_vect);

protected :

private :

    std::deque<int>     _deque;
    std::vector<int>    _vect;

};
#endif