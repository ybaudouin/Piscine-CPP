/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:57:25 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/21 08:28:42 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main(){

    std::cout << std::endl;
    std::cout << YELLOW << "**********Constructor**********" << END << std::endl << std::endl;
    Bureaucrat  boss_1("Boss_1", 46);
    Bureaucrat  boss_2("Boss_2", 6);
    Bureaucrat  boss_3("Boss_3", 138);
    Intern      intern_1;
    AForm       *shrub_1;
    AForm       *robot_1;
    AForm       *president_1;
    AForm       *inexisting_form;
    shrub_1 = intern_1.makeForm("ShrubberyCreationForm", "Boss_1");
    robot_1 = intern_1.makeForm("RobotomyRequestForm", "Boss_2");
    president_1 = intern_1.makeForm("PresidentialPardonForm", "Boss_3");
    {
        inexisting_form = intern_1.makeForm("voidForm", "Boss_1");
    }
    (void)inexisting_form;

    std::cout << std::endl;

    std::cout << YELLOW << "**********Init Bureaucrat**********" << END << std::endl << std::endl; 
    std::cout << boss_1 << std::endl;
    std::cout << boss_2 << std::endl;
    std::cout << boss_3 << std::endl << std::endl;

    std::cout << YELLOW << "**********Shrubbery Form**********" << END << std::endl << std::endl;
    boss_3.signForm(*shrub_1);
    boss_3.executeForm(*shrub_1);
    std::cout << RED << "Trees haven't been planted " << END << std::endl;
    boss_3.upGrade();
    boss_3.executeForm(*shrub_1);
    shrub_1->execute(boss_3);
    std::cout << GREEN << "Trees have been planted " << END << std::endl << std::endl;


    std::cout << YELLOW << "**********Robotomy Form**********" << END << std::endl << std::endl;
    boss_1.signForm(*robot_1);
    boss_1.executeForm(*robot_1);
    boss_1.upGrade();
    boss_1.executeForm(*robot_1);
    robot_1->execute(boss_1);
    robot_1->execute(boss_1);
    robot_1->execute(boss_1);
    robot_1->execute(boss_1);
    std::cout << std::endl;

    std::cout << YELLOW << "**********Presidential pardon**********" << END << std::endl << std::endl;
    boss_2.signForm(*president_1);
    boss_2.executeForm(*president_1);
    boss_2.upGrade();
    boss_2.executeForm(*president_1);
    president_1->execute(boss_2);
    std::cout << std::endl;
    
    std::cout << YELLOW << "**********Destructor**********" << END << std::endl << std::endl;
    
}