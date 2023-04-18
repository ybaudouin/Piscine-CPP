/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:55:11 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/06 18:17:00 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cctype>

PhoneBook::PhoneBook(void){

	this->_index = 0;
	std::cout << "Welcome to your PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook(void){

	std::cout << "Have a nice day" << std::endl;
}

std::string	PhoneBook::format(std::string input, const unsigned long int len){

	std::string	str;

	str = input;

	if (str.length() > len){

		str.resize(len);
		str[str.length() - 1] = '.';
	}
	return (str);
}

std::string	PhoneBook::check_input(std::string tmp){

	while(tmp.empty() == 1){

		std::cout << "You must enter something, please > ";
		std::getline(std::cin, tmp);
	}
	return (tmp);
}



void	PhoneBook::add_contact(void){

	std::string	tmp; 

	if (this->_index > 7){

		std::cout << "The phonebook is full, the oldest number will be deleted !" << std::endl;
	} 
	std::cout << "First_name : ";
	std::getline(std::cin, tmp);
	tmp = check_input(tmp);
	contacts[_index % 8].setfirst_name(tmp);
	std::cout << "Last_name : ";
	std::getline(std::cin, tmp);
	tmp = check_input(tmp);
	contacts[_index % 8].setlast_name(tmp);
	std::cout << "Nickname : ";
	std::getline(std::cin, tmp);
	tmp = check_input(tmp);
	contacts[_index % 8].setnickname(tmp);
	std::cout << "Phone_number : ";
	std::getline(std::cin, tmp);
	tmp = check_input(tmp);
	contacts[_index % 8].setphone_number(tmp);
	std::cout << "Darkest_secret : ";
	std::getline(std::cin, tmp);
	tmp = check_input(tmp);
	contacts[_index % 8].setdarkest_secret(tmp);
	++_index;
}

void PhoneBook::print_index(int i){

		std::cout << "First_name : " << (contacts[i].getfirst_name()) << std::endl;
		std::cout << "Last_name : " << (contacts[i].getlast_name()) << std::endl;
		std::cout << "Nickname : " << (contacts[i].getnickname()) << std::endl;
		std::cout << "Phone_number : " << (contacts[i].getphone_number()) << std::endl;
		std::cout << "Darkest_secret : " << (contacts[i].getdarkest_secret()) << std::endl;
}

int	PhoneBook::search_index(const int count_index){

	int	error;
	int	index;
	std::string	tmp;

	do {
		error = 0;
		std::getline(std::cin, tmp);
		if (tmp.empty() == 1){
			std::cout << "Please enter the index of the contact to display > ";
			continue;
		}
		for (int i = 0; i < (int)tmp.length() ; ++i)
		{
			if (tmp[i] == '-' && i == 0)
				continue ;
			if (isdigit(tmp[i]) == 0)
				error = 1;
		}
		if (error == 1)
		{
			std::cout << "Please enter a digit > ";
			continue ;
		}
		index = std::atoi(tmp.c_str());
		if (index >= count_index || index < 0)
			std::cout << "Index not found, try again > ";
	}while (index >= count_index || index < 0);
	return (index);
}

void	PhoneBook::search_contact(void){

	int			count_index = 0;
	int			index;

	std::cout << "|¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯|" << std::endl;
	std::cout << "|     Index|First_name| Last_name|  Nickname|" << std::endl;
	std::cout << "|ˍˍˍˍˍˍˍˍˍˍ|ˍˍˍˍˍˍˍˍˍˍ|ˍˍˍˍˍˍˍˍˍˍ|ˍˍˍˍˍˍˍˍˍˍ|" << std::endl;
	for(int i=0; i < 8 && i < _index; ++i){

		std::cout << "|         " << i;
		std::cout << "|" << std::setw(10);
		std::cout << format(contacts[i].getfirst_name(), 10);
		std::cout << "|" << std::setw(10);
		std::cout << format(contacts[i].getlast_name(), 10);
		std::cout << "|" << std::setw(10);
		std::cout << format(contacts[i].getnickname(), 10);
		std::cout << "|";
		std::cout << std::endl;
		++count_index;
	}
	if (count_index == 0){
		std::cout << std::endl;
		return ;
	}
	std::cout << " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ " << std::endl;
	std::cout << "Please enter the index of the contact to display > ";
	index = search_index(count_index);
	print_index(index);
}
