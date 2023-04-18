/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:35:51 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/06 13:44:14 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(){

	PhoneBook	book;
	std::string	command;

	do{
		std::cout << "ENTER A COMMAND > ";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0){
			book.add_contact();
		}
		else if (command.compare("SEARCH") == 0){
			book.search_contact();
		}
	}while(command.compare("EXIT") != 0);	
}
