/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:06:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/06 13:44:12 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.hpp"
#include <stdlib.h>
#include <iomanip>
#include <iostream>


class PhoneBook {

public :

	PhoneBook(void);
	~PhoneBook(void);
	void add_contact();
	void search_contact();

private :

	int			_index;
	Contact 	contacts[8];
	std::string format(std::string input, const unsigned long int len);
	std::string	check_input(std::string input);
	void		print_index(int i);
	int			search_index(int count_index);
};

#endif
