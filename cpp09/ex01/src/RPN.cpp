/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:07:29 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/04/12 15:29:52 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

RPN::RPN() {};


RPN::RPN(const RPN &copy) {
   
   *this = copy;
}

RPN::~RPN() {};

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

RPN &RPN::operator=(const RPN &copy) {

    stack = copy.stack;
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

double RPN::rpn_calculator(std::string input) {

    double              number_1 = 0;
    double              number_2 = 0;

    for(long unsigned int   i = 0; i < input.size(); i++) {
        if (std::isdigit(input[i]))
            stack.push(input[i] - '0');
        else if (input[i] == ' ')
            continue;
        else
            switch (input[i]) {
                case '+':
                    if (stack.size() < 2)
                    {
                        std::cout << RED << "Error:" << END << "bad input." << std::endl;
                        return (1);
                    }
                    number_1 = stack.top();
                    stack.pop();
                    number_2 = stack.top();
                    stack.pop();
                    stack.push(number_1 + number_2);
                    break;
                case '-':
                    if (stack.size() < 2)
                    {
                        std::cout << RED << "Error:" << END << "bad input." << std::endl;
                        return (1);
                    }
                    number_1 = stack.top();
                    stack.pop();
                    number_2 = stack.top();
                    stack.pop();
                    stack.push(number_2 - number_1);
                    break;
                case '*':
                    if (stack.size() < 2)
                    {
                        std::cout << RED << "Error:" << END << "bad input." << std::endl;
                        return (1);
                    }
                    number_1 = stack.top();
                    stack.pop();
                    number_2 = stack.top();
                    stack.pop();
                    stack.push(number_1 * number_2);
                    break;
                case '/':
                    if (stack.size() < 2)
                    {
                        std::cout << RED << "Error:" << END << "bad input." << std::endl;
                        return (1);
                    }
                    number_1 = stack.top();
                    stack.pop();
                    number_2 = stack.top(); 
                    stack.pop();
                    if (number_1 == 0) {
                        std::cout << RED << "Error:" << END << " you can't divide by zero !" << std::endl;
                        return (1);
                    }
                    stack.push(number_2 / number_1);
                    break;
                default:
                    std::cout << RED << "Error:" << END << " The operator is not correct" << std::endl;
                    return (1);
            }
    }
    if (stack.size() != 1) {
        std::cout << RED << "Error:" << END << " bad input." << std::endl;
        return (1);
    }
    number_1 = stack.top();
    std::cout << number_1 << std::endl;
    return (0);
}