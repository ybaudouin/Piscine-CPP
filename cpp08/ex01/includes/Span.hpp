/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:15:40 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/27 09:00:21 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>


class Span {

public :

    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &copy);
    ~Span();

    void            addNumber(unsigned int num);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();

    template<typename T>
    void            addNumbers(T begin, T end);

protected :
  
private :

    Span();
    std::vector<unsigned int>   span;
    unsigned int                _nbr;
  
};

template<typename T>
void Span::addNumbers(T begin, T end) {

    if (std::distance(begin, end) + span.size() <= _nbr)
        span.insert(span.end(), begin, end);
    else 
        throw (std::out_of_range("Error insert"));    
}
#endif