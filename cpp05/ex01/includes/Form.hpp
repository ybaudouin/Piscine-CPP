/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:28 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/16 12:00:46 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public :

    Form(const std::string name, int signing_grade, int execution_grade);
    Form(const Form &copy);
    ~Form();
    Form    &operator=(const Form &copy);
    
    std::string getName(void) const;
    int         getSigning_grade(void) const;
    int         getExecution_grade(void) const;
    bool        getSigning_status(void) const;
    void        beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception {

        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {

        const char *what() const throw();
    };

protected :
  
private :

    Form();
    const std::string   _name;
    bool                _signing_status;
    const int           _signing_grade;
    const int           _execution_grade;
};

std::ostream &operator<<(std::ostream &os, const Form &copy);

#endif