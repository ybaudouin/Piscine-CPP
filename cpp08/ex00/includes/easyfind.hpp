/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:52:35 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/27 10:48:50 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>


template<typename T>
void easyfind(T &containers, int to_find) {

    typename T::iterator    it;
    typename T::iterator    start;
    typename T::iterator    end;

    start = containers.begin();
    end = containers.end();
    it = std::find(start, end, to_find);
    if (it != end)
        std::cout << "found : " << *it << std::endl;
    else
        throw (std::out_of_range("not found")); 
    
};

#endif