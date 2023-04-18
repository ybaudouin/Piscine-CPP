/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:16:09 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/27 11:46:11 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

Span::Span(unsigned int N) {

    _nbr = N;
}


Span::Span(const Span &copy) {

    span = copy.span;
    _nbr = copy._nbr;
}

Span::~Span(){};

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


Span &Span::operator=(const Span &copy){

    if (this == &copy )
        return (*this);
    span = copy.span;
    _nbr = copy._nbr;
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

void    Span::addNumber(unsigned int num) {
        
    if (span.size() < _nbr) {
        span.push_back(num);
    }
    else 
        throw (std::out_of_range("Vector is full !"));
}

unsigned int    Span::shortestSpan() {

    std::vector<unsigned int>::iterator     start;
    std::vector<unsigned int>::iterator     end;
    unsigned int                            tmp;

    if (span.size() <= 1)
        throw (std::out_of_range("Too few values"));
    tmp = UINT_MAX;
    start = span.begin();
    end = span.end();
    sort(start, end);
    for(unsigned int i = 1; i < span.size(); i++)
        if (span[i] - span[i - 1] < tmp)
            tmp = (span[i] - span[i - 1]);
    return (tmp);
}

unsigned int    Span::longestSpan() {

    std::vector<unsigned int>::iterator    start;
    std::vector<unsigned int>::iterator    end;

    if (span.size() <= 1)
        throw (std::out_of_range("Too few values"));
    start = span.begin();
    end = span.end();
    sort(start, end);
    return (*(--span.end()) - *span.begin());
}