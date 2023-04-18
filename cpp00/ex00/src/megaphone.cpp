/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:59:51 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/03 16:32:47 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main (int argc, char **argv)
{
	std::string str;

	 if (argc < 2)
	 	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i=1; i < argc; ++i)
		{
			str = argv[i];
			for (std::string::size_type j=0; j < str.length(); ++j)
				std::cout << (char)toupper(str[j]);
		}
	std::cout << std::endl;
}