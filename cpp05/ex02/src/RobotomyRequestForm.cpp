/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:44:25 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/17 10:58:18 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : AForm ("RobotomyRequestForm", 72, 45) {
    
    std::cout << "RobotomyRequestForm was created !" << std::endl;
    _target = target;
    srand(time(NULL));

}

RobotomyRequestForm::~RobotomyRequestForm(){

    std::cout << "Form was classified !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) {

     std::cout << "Copy constructor of RobotomyRequestForm class" << std::endl;
    _target = copy._target;
    srand(time(NULL));
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){

    (void)copy;
    std::cout << "Assignment operator Form called" << std::endl;
    return (*this);
}

// std::ostream& operator<<(std::ostream &os, const RobotomyRequestForm &src){

//     os << "Form " << YELLOW << src.getName() << END << " must have a grade " << GREEN
//         << src.getSigning_grade() << END << " to sign it and a grade " << GREEN
//             << src.getExecution_grade() << END << " to excute it. " << std::endl << "Status form : "
//                 << std::boolalpha << CYAN << src.getSigning_status() << END;
//     return (os);
// }

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                GETTER && SETTER                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                               EXCEPTION                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

const char *RobotomyRequestForm::GradeTooHighException::what() const throw(){

    return ("Grade Too High");
}

const char *RobotomyRequestForm::GradeTooLowException::what() const throw(){

    return ("Grade Too Low");
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                 FUNCTIONS                                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{

    int robot;

    AForm::check_execute(executor);
    std::cout << "* drill noise ! *" << std::endl;
    robot = rand() %2;
    if (robot)
        std::cout << _target << " has been successfully robotomized !" << std::endl;
    else
        std::cout << _target << " has not been robotomized !" << std::endl;
}