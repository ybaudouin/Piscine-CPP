/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:57:25 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/16 14:02:16 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(){

    Form    form_1("Imposition", 1, 50);
    Form    form_2("Contract", 1, 50);
    Bureaucrat  boss_1("Boss_1", 1);
    Bureaucrat  boss_2("Boss_2", 2);

    std::cout << form_1 << std::endl;
    std::cout << form_2 << std::endl;
    std::cout << boss_1 << std::endl;
    std::cout << boss_2 << std::endl;

    boss_1.signForm(form_1);
    boss_2.signForm(form_2);
    std::cout << form_1 << std::endl;
    std::cout << form_2 << std::endl;

}