/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:22:15 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/17 10:57:07 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <iostream>

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

PresidentialPardonForm::PresidentialPardonForm() : AForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
    : AForm ("PresidentialPardonForm", 25, 5) {
    
    std::cout << "PresidentialPardonForm was created !" << std::endl;
    _target = target;

}

PresidentialPardonForm::~PresidentialPardonForm() {
    
    std::cout << "Form was classified !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy) {

     std::cout << "Copy constructor of PresidentialPardonForm class" << std::endl;
    _target = copy._target;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){

    (void)copy;
    std::cout << "Assignment operator Form called" << std::endl;
    return (*this);
}

// std::ostream& operator<<(std::ostream &os, const PresidentialPardonForm &src){

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

const char *PresidentialPardonForm::GradeTooHighException::what() const throw(){

    return ("Grade Too High");
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw(){

    return ("Grade Too Low");
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                 FUNCTIONS                                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{

    AForm::check_execute(executor);
    std::cout << _target << " was forgiven by Zaphod Beeblebrox." << std::endl;
}