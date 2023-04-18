/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:07:33 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/06 13:44:22 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

# include <string>

class Contact {

public :

	void		setfirst_name(std::string first_name);
	std::string	const getfirst_name();
	void		setlast_name(std::string last_name);
	std::string	const getlast_name();
	void		setnickname(std::string nickname);
	std::string	const getnickname();
	void		setphone_number(std::string phone_number);
	std::string	const getphone_number();
	void		setdarkest_secret(std::string darkest_secret);
	std::string	const getdarkest_secret();

private :

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

};

#endif
