/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:51:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/16 13:42:36 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

Form::Form() : _signing_grade(0), _execution_grade(0) {};

Form::Form(const std::string name, int signing_grade, int execution_grade)
    : _name(name), _signing_status(false), _signing_grade(signing_grade), _execution_grade(execution_grade) {

    std::cout << "Form was created !" << std::endl;
    if (signing_grade <= 0 || execution_grade <= 0 )
        throw Form::GradeTooHighException();
    else if (execution_grade > 150 || signing_grade > 150)
        throw Form::GradeTooLowException();
}

Form::~Form(){

    std::cout << "Form was classified !" << std::endl;
}

Form::Form(const Form &copy)
    : _name(copy._name), _signing_status(false), _signing_grade(copy._signing_grade), _execution_grade(copy._execution_grade) {

     std::cout << "Copy constructor of Form class" << std::endl;

}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

Form &Form::operator=(const Form &copy){

    (void)copy;
    std::cout << "Assignment operator Form called" << std::endl;
    return (*this);
}

std::ostream& operator<<(std::ostream &os, const Form &src){

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


std::string Form::getName(void) const {

    return (_name);
}

int Form::getSigning_grade(void) const {

    return (_signing_grade);
}

int Form::getExecution_grade(void) const {

    return (_execution_grade);
}

bool Form::getSigning_status(void) const {

    return (_signing_status);
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                               EXCEPTION                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

const char *Form::GradeTooHighException::what() const throw(){

    return ("Grade Too High");
}

const char *Form::GradeTooLowException::what() const throw(){

    return ("Grade Too Low");
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                 FUNCTIONS                                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

void    Form::beSigned(const Bureaucrat &bureaucrat){

    if (bureaucrat.getGrade() <= _signing_grade)
        _signing_status = true;
    else 
        throw Form::GradeTooLowException();
}