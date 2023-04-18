/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:21:55 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/13 17:20:10 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

public :

    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat  &operator=(const Bureaucrat &copy);

    std::string getName(void) const;
    int         getGrade(void) const;
    int         upGrade(void);
    int         downGrade(void);
    void        signForm(Form &form);

    class GradeTooHighException : public std::exception {

        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {

        const char *what() const throw();
    };

protected :
  
private :

    Bureaucrat();
    const std::string   _name;
    int                 _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &copy);

#endif