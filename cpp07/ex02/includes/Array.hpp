/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:58:03 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/21 15:28:26 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>

template< typename T>
class Array {

public :

    Array();
    Array(unsigned int n);
    Array(const Array &copy);
    ~Array();
    Array &operator=(const Array &copy);
    T &operator[] (const unsigned int index);
    int size(void)const;

private :

    T               *_arr;
    unsigned int    _size;

    class out_of_range : public std::exception {

        const char *what() const throw() {
            return ("Index out of range");
        }
    };
};
    template<typename T>
    Array<T>::Array() {

        _size = 0;
        _arr = new T[_size];
    }

    template<typename T>
    Array<T>::Array(unsigned int n) {
        _size = n;
        _arr = new T[n]();
    }

    template <typename T>
    T &Array<T>::operator[](unsigned int index) {
        if (index < 0 || index >= _size)
            throw (Array::out_of_range());
        else
            return (_arr[index]);
    }

    template<typename T>
    int Array<T>::size()const {

        std::cout << "Number of elements : " << _size << std::endl;
        return(_size);
    }

    template<typename T>
    Array<T> &Array<T>::operator=(const Array &copy) {

        if (_arr)
            delete [] _arr;
        _size = copy._size;
        _arr = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _arr[i] = copy._arr[i];
        return (*this);
    }

    template<typename T>
    Array<T>::Array(const Array &copy) {

        _arr = NULL;
        *this = copy;
    }

    template<typename T>
    Array<T>::~Array(){

        delete [] _arr;
    };

#endif