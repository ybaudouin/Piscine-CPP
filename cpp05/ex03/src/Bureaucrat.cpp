/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:51:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/17 13:27:09 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {

    if (grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) :_name(copy._name){

     std::cout << "Copy constructor of Bureaucrat class" << std::endl;
    _grade = copy._grade;
}

Bureaucrat::~Bureaucrat(){

    std::cout << "Have a nice day Bureaucrat !" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                             OVERLOAD OPERATOR                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

std::ostream& operator<<(std::ostream &os, const Bureaucrat &src){

    os << src.getName() << " Bureaucrat grade " << src.getGrade();
    return (os);
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){

    std::cout << "Assignment operator Bureaucrat called" << std::endl;
    _grade = copy._grade;
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                GETTER && SETTER                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

std::string Bureaucrat::getName(void) const {

    return (_name);
}

int Bureaucrat::getGrade(void) const {

    return (_grade);
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                               EXCEPTION                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


const char *Bureaucrat::GradeTooHighException::what() const throw(){

    return ("Grade Too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){

    return ("Grade Too Low");
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                                 FUNCTIONS                                  //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

int Bureaucrat::upGrade(void) {

    if (_grade - 1 <= 0)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
    std::cout << CYAN << _name << " was promoted ! " << END << std::endl;
    return (_grade);
}

int Bureaucrat::downGrade(void) {

    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
    std::cout << CYAN << _name << " has been demoted ! " << END << std::endl;
    return (_grade);
}

void        Bureaucrat::signForm(AForm &form){

    try {

        form.beSigned(*this);
        std::cout << GREEN << _name << " signed " << form.getName() << END << std::endl;

    }
    catch (const std::exception &e) {
     
        std::cout << RED << _name << " couldn't sign " << form.getName() << " because " << e.what() << END << std::endl;
    
    }
}

void        Bureaucrat::executeForm(AForm const &form){

    try {

        form.check_execute(*this);
        std::cout << GREEN << _name << " executed " << form.getName() << END << std::endl;

    }
    catch (const std::exception &e) {
     
        std::cout << RED << _name << " couldn't execute " << form.getName() << " because " << e.what() << END << std::endl;
    
    }
}