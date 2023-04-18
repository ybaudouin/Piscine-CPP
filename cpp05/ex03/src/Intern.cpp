/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:32:31 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/21 10:40:30 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

Intern::Intern(){

    std::cout << "An intern has been hired !" << std::endl;
}

Intern::Intern(const Intern &copy) {

    (void)copy;
     std::cout << "Copy constructor of Intern class" << std::endl;
}

Intern::~Intern(){

    std::cout << "Intern is tired" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


Intern &Intern::operator=(const Intern &copy){

    (void)copy;
    std::cout << "Assignment operator Intern called" << std::endl;
    return (*this);
}

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

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                 FUNCTIONS                                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

AForm   *Intern::makeForm(std::string form_name, std::string form_target){

    std::string name[] = {
        "ShrubberyCreationForm", 
        "RobotomyRequestForm", 
        "PresidentialPardonForm"
    };
    int i;

    for (i = 0; i < 3; i++){
        if (name[i] == form_name)
            break;
    }
    switch(i) {
        case 0:
            std::cout << "Intern create" << form_name << std::endl;
            return (new ShrubberyCreationForm(form_target));
        case 1:
            std::cout << "Intern create" << form_name << std::endl;
            return (new RobotomyRequestForm(form_target));
        case 2:
            std::cout << "Intern create" << form_name << std::endl;
            return (new PresidentialPardonForm(form_target));
        default:
            std::cout << "INVALID FORM NAME !" << std::endl;
            return (NULL);
    }
}