/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:35:43 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/04/13 16:58:25 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

PmergeMe::PmergeMe() {};

PmergeMe::PmergeMe(int argc, char **argv) {

    for (int i = 1; i < argc; i++) {
        std::string str = argv[i];
        for (long unsigned int i = 0; i < str.size(); i++) {
            if (!std::isdigit(str[i])) {
                std::cout << RED << "Error:" << END << " bad input." << std::endl;
                exit (1);
            }
        }
        int nb = atoi(argv[i]);
        if (nb < 0 || nb > INT_MAX) {
            std::cout << RED << "Error:" << END << " bad input." << std::endl;
            exit (1);
        }
        _vect.push_back(nb);
        _deque.push_back(nb);
    }
}


PmergeMe::PmergeMe(const PmergeMe &copy) {
   
   (void)copy;
   *this = copy;
}

PmergeMe::~PmergeMe() {};

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

PmergeMe &PmergeMe::operator=(const PmergeMe &copy) {

    (void)copy;
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                GETTER && SETTER                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

std::vector<int> PmergeMe::get_vect() {

    return (_vect);
}

std::deque<int> PmergeMe::get_deque() {

    return (_deque);
}

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

//***********************************VECTOR***********************************//

void    PmergeMe::split_array(std::vector<int> input, int start, int end, std::vector<int> &final_array) {

    int mid = (start + end) / 2;
    int sub_array_one = mid - start + 1;
    int sub_array_two = end - mid;
    std::vector<int>    array_left;
    std::vector<int>    array_right;
    std::vector<int>    array_tmp1;
    std::vector<int>    array_tmp2;

    for (int i = 0; i < sub_array_one; i++)
        array_left.push_back(input[start + i]);
    for (int j = 0; j < sub_array_two; j++)
        array_right.push_back(input[mid + 1 + j]);
    if (array_left.size() <= 5 || array_right.size() <= 5) {
        sort_array_left(array_left);
        sort_array_right(array_right);
        merge_left_and_right(array_left, array_right, final_array);
        return;
    }
    split_array(array_left, 0, (int)(array_left.size() - 1), array_tmp1);
    split_array(array_right, 0, (int)(array_right.size() - 1), array_tmp2);
    merge_left_and_right(array_tmp1, array_tmp2, final_array);
}

void    PmergeMe::sort_array_left(std::vector<int> &array_left) {

    int index_end = array_left.size() - 1;

    for (int i = 1; i <= index_end; i++) {
        int j = i;
        while (j > 0 && array_left[j]  < array_left[j - 1]) {
            std::swap(array_left[j], array_left[j - 1]);
            j--;
        }
    }
}

void    PmergeMe::sort_array_right(std::vector<int> &array_right) {

    int index_end_right = array_right.size() - 1;


    for (int i = 1; i <= index_end_right; i++) {
        int j = i;
        while (j > 0 && array_right[j]  < array_right[j - 1]) {
            std::swap(array_right[j], array_right[j - 1]);
            j--;
        }
    }
}

void    PmergeMe::merge_left_and_right(std::vector<int> &array_left, std::vector<int> &array_right, std::vector<int> &final_array) {

        long unsigned int i = 0;
        long unsigned int j = 0;

        while (i < array_left.size() && j < array_right.size()) {
            if (array_left[i] < array_right[j]) {
                final_array.push_back(array_left[i]);
                i++;
            }
            else {    
                final_array.push_back(array_right[j]);
                j++;
            }
        }
        while (i < array_left.size()) {
            final_array.push_back(array_left[i]);
                i++;
        }
        while (j < array_right.size()) {
            final_array.push_back(array_right[j]);
                j++;
        }
}

// //***********************************DEQUE***********************************//

void    PmergeMe::split_array_deque(std::deque<int> input, int start, int end, std::deque<int> &final_array_deque) {

    int mid = (start + end) / 2;
    int sub_array_one = mid - start + 1;
    int sub_array_two = end - mid;
    std::deque<int>    array_left_deque;
    std::deque<int>    array_right_deque;
    std::deque<int>    array_tmp1_deque;
    std::deque<int>    array_tmp2_deque;

    for (int i = 0; i < sub_array_one; i++)
        array_left_deque.push_back(input[start + i]);
    for (int j = 0; j < sub_array_two; j++)
        array_right_deque.push_back(input[mid + 1 + j]);
    if (array_left_deque.size() <= 15 || array_right_deque.size() <= 15) {
        sort_array_left_deque(array_left_deque);
        sort_array_right_deque(array_right_deque);
        merge_left_and_right_deque(array_left_deque, array_right_deque, final_array_deque);
        return;
    }
    split_array_deque(array_left_deque, 0, (int)(array_left_deque.size() - 1), array_tmp1_deque);
    split_array_deque(array_right_deque, 0, (int)(array_right_deque.size() - 1), array_tmp2_deque);
    merge_left_and_right_deque(array_tmp1_deque, array_tmp2_deque, final_array_deque);
}

void    PmergeMe::sort_array_left_deque(std::deque<int> &array_left_deque) {

    int index_end = array_left_deque.size() - 1;

    for (int i = 1; i <= index_end; i++) {
        int j = i;
        while (j > 0 && array_left_deque[j]  < array_left_deque[j - 1]) {
            std::swap(array_left_deque[j], array_left_deque[j - 1]);
            j--;
        }
    }
}

void    PmergeMe::sort_array_right_deque(std::deque<int> &array_right_deque) {

    int index_end_right = array_right_deque.size() - 1;


    for (int i = 1; i <= index_end_right; i++) {
        int j = i;
        while (j > 0 && array_right_deque[j]  < array_right_deque[j - 1]) {
            std::swap(array_right_deque[j], array_right_deque[j - 1]);
            j--;
        }
    }
}

void    PmergeMe::merge_left_and_right_deque(std::deque<int> &array_left_deque, std::deque<int> &array_right_deque, std::deque<int> &final_array_deque) {

        long unsigned int i = 0;
        long unsigned int j = 0;

        while (i < array_left_deque.size() && j < array_right_deque.size()) {
            if (array_left_deque[i] < array_right_deque[j]) {
                final_array_deque.push_back(array_left_deque[i]);
                i++;
            }
            else {    
                final_array_deque.push_back(array_right_deque[j]);
                j++;
            }
        }
        while (i < array_left_deque.size()) {
            final_array_deque.push_back(array_left_deque[i]);
                i++;
        }
        while (j < array_right_deque.size()) {
            final_array_deque.push_back(array_right_deque[j]);
                j++;
        }
}

// //***********************************PRINT***********************************//

void PmergeMe::print_result(std::vector<int> &final_array_vector) {

    std::vector<int>::iterator   it;
    std::vector<int>::iterator   ite;
    std::vector<int>::iterator   hit;
    std::vector<int>::iterator   hite;

    hit = _vect.begin();
    hite = _vect.end();
    it = final_array_vector.begin();
    ite = final_array_vector.end();

    //*****PRINT_BEFORE*****

    std::cout << YELLOW << "Before:" << END;
    for (; hit != hite; hit++)
        std::cout << " " << *hit;
    std::cout << std::endl;

    //*****PRINT_AFTER*****

    std::cout << YELLOW << "After: " << END;
    for (; it != ite; it++)
        std::cout << " " << *it;
    std::cout << std::endl;


}