/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:00:31 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/13 11:42:27 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	std::string str;
	Harl harl;

	if (argc != 2)
		std::cout << "You must enter 2 parameters" << std::endl;
	else
	{
		str = argv[1];
		harl.complain(str);
	}
}