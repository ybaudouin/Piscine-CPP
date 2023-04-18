/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:51:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/17 11:09:56 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

AForm::AForm() : _signing_grade(0), _execution_grade(0) {}

AForm::AForm(const std::string name, int signing_grade, int execution_grade)
    : _name(name), _signing_status(false), _signing_grade(signing_grade), _execution_grade(execution_grade) {

    std::cout << "Form was created !" << std::endl;
    if (signing_grade <= 0 || execution_grade <= 0 )
        throw AForm::GradeTooHighException();
    else if (execution_grade > 150 || signing_grade > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm(){

    std::cout << "Form was classified !" << std::endl;
}

AForm::AForm(const AForm &copy)
    : _name(copy._name), _signing_status(false), _signing_grade(copy._signing_grade), _execution_grade(copy._execution_grade) {

     std::cout << "Copy constructor of Form class" << std::endl;

}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

AForm &AForm::operator=(const AForm &copy){

    (void)copy;
    std::cout << "Assignment operator Form called" << std::endl;
    return (*this);
}

std::ostream& operator<<(std::ostream &os, const AForm &src){

    os << "Form " << YELLOW << src.getName() << END << " must have a grade " << GREEN
        << src.getSigning_grade() << END << " to sign it and a grade " << GREEN
            << src.getExecution_grade() << END << " to excute it. " << std::endl << "Status form : "
                << std::boolalpha << CYAN << src.getSigning_status() << END;
    return (os);
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                GETTER && SETTER                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


std::string AForm::getName(void) const {

    return (_name);
}

int AForm::getSigning_grade(void) const {

    return (_signing_grade);
}

int AForm::getExecution_grade(void) const {

    return (_execution_grade);
}

bool AForm::getSigning_status(void) const {

    return (_signing_status);
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                               EXCEPTION                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

const char *AForm::GradeTooHighException::what() const throw(){

    return ("Grade Too High");
}

const char *AForm::GradeTooLowException::what() const throw(){

    return ("Grade Too Low");
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                 FUNCTIONS                                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

void    AForm::beSigned(const Bureaucrat &bureaucrat){

    if (_signing_status)
        return;
    if (bureaucrat.getGrade() <= _signing_grade)
        _signing_status = true;
    else 
        throw AForm::GradeTooLowException();
}

void    AForm::check_execute(const Bureaucrat &bureaucrat) const{

    if (!getSigning_status())
        throw AForm::GradeTooLowException();
    if (bureaucrat.getGrade() > _execution_grade)
        throw AForm::GradeTooLowException();
}