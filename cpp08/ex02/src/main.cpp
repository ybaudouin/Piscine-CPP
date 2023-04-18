/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:17:29 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/27 14:13:16 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
    std::cout << "=========MutantStack=========" << std::endl;
    std::cout << std::endl;
    MutantStack<int> mstack;
    std::cout << CYAN << "Push number : " << END << "5" << std::endl;
    mstack.push(5);
    std::cout << CYAN << "Push number : " << END << "17" << std::endl;
    mstack.push(17);
    std::cout << std::endl;
    std::cout << YELLOW << "Top of MutantStack : " << END << mstack.top() << std::endl;
    std::cout << YELLOW << "Size of MutantStack : " << END << mstack.size() << std::endl;
    std::cout << RED << "deletion of the number 17" << END << std::endl;
    mstack.pop();
    std::cout << YELLOW << "Size of MutantStack : " << END << mstack.size() << std::endl;
    std::cout << CYAN << "Push number : " << END << "3" << std::endl;
    mstack.push(3);
    std::cout << CYAN << "Push number : " << END << "5" << std::endl;
    mstack.push(5);
    std::cout << CYAN << "Push number : " << END << "737" << std::endl;
    mstack.push(737);
    std::cout << CYAN << "Push number : " << END << "0" << std::endl;
    mstack.push(0);
    std::cout << YELLOW << "Size of MutantStack after push 4 digits : " << END << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << BLUE << "First element of Mutantstack : " << END << *it << std::endl;
    std::cout << GREEN << "++it for access to the second element" << END << std::endl;
    ++it;
    std::cout << BLUE << "Second element : " << END << *it << std::endl;
    std::cout << GREEN << "-1 for return to the first element" << END << std::endl;
    --it;
    std::cout << BLUE << "First element : " << END << *it << std::endl;
    std::cout << YELLOW << "MutantStack Iteration :" << END << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    
    }
    std::cout << std::endl;
    std::cout << "=========LIST=========" << std::endl;
    std::cout << std::endl;
    std::list<int> mlist;
    std::cout << CYAN << "Push number : " << END << "5" << std::endl;
    mlist.push_back(5);
    std::cout << CYAN << "Push number : " << END << "17" << std::endl;
    mlist.push_back(17);
    std::cout << std::endl;
    std::cout << YELLOW << "Top of the list : " << END << mlist.back() << std::endl;
    std::cout << YELLOW << "Size of list : " << END << mlist.size() << std::endl;
    std::cout << RED << "deletion of the number 17" << END << std::endl;
    mlist.pop_back();
    std::cout << YELLOW << "Size of list : " << END << mlist.size() << std::endl;
    std::cout << CYAN << "Push number : " << END << "3" << std::endl;
    mlist.push_back(3);
    std::cout << CYAN << "Push number : " << END << "5" << std::endl;
    mlist.push_back(5);
    std::cout << CYAN << "Push number : " << END << "737" << std::endl;
    mlist.push_back(737);
    std::cout << CYAN << "Push number : " << END << "0" << std::endl;
    mlist.push_back(0);
    std::cout << YELLOW << "Size of list after push 4 digits : " << END << mlist.size() << std::endl;
    std::list<int>::iterator it = mlist.begin();
    std::list<int>::iterator ite = mlist.end();
    std::cout << BLUE << "First element of the list : " << END << *it << std::endl;
    std::cout << GREEN << "++it for access to the second element" << END << std::endl;
    ++it;
    std::cout << BLUE << "Second element : " << END << *it << std::endl;
    std::cout << GREEN << "-1 for return to the first element" << END << std::endl;
    --it;
    std::cout << BLUE << "First element : " << END << *it << std::endl;
    std::cout << YELLOW << "List Iteration :" << END << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    return 0;
}