/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:39:52 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/06 11:44:54 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setfirst_name(std::string first_name){

	_first_name = first_name;	
}

std::string	const Contact::getfirst_name(){

	return(_first_name);
}

void	Contact::setlast_name(std::string last_name){

	_last_name = last_name;
}

std::string const Contact::getlast_name(){

	return(_last_name);
}

void	Contact::setnickname(std::string nickname){

	_nickname = nickname;
}

std::string const Contact::getnickname(){

	return(_nickname);
}

void	Contact::setphone_number(std::string phone_number){

	_phone_number = phone_number;
}

std::string const Contact::getphone_number(){

	return(_phone_number);
}

void	Contact::setdarkest_secret(std::string darkest_secret){

	_darkest_secret = darkest_secret;
}

std::string const Contact::getdarkest_secret(){

	return(_darkest_secret);
}
