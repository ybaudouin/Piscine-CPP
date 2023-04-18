/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:17:45 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/27 12:19:33 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>
#include <stack>
#include <iterator>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {

public :

    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack();
    MutantStack(const MutantStack &copy);
    MutantStack &operator=(const MutantStack &copy);
    ~MutantStack();
    iterator    begin();
    iterator    end();
    

protected :
  
private :

  
};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {};

template<typename T>
MutantStack<T>::~MutantStack() {};

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &copy) : std::stack<T>(copy) {};

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy) {

    if (this == &copy)
        return (*this);
    *this = copy;
    return(*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {

    return(this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {

    return(this->c.end());
}

#endif