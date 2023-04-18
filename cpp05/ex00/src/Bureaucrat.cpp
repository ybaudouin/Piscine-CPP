/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:51:05 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/16 13:42:24 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                       CONSTRUCTOR && DESTRUCTOR                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

Bureaucrat::Bureaucrat(){};

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


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){

    std::cout << "Assignment operator Bureaucrat called" << std::endl;
    _grade = copy._grade;
    return (*this);
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &src){

    os << src.getName() << " Bureaucrat grade " << src.getGrade();
    return (os);
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
    return (_grade);
}

int Bureaucrat::downGrade(void) {

    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
    return (_grade);
}