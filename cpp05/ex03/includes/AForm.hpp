/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:28 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/17 10:40:45 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

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

class AForm {

public :

    AForm();
    AForm(const std::string name, int signing_grade, int execution_grade);
    AForm(const AForm &copy);
    virtual ~AForm();
    AForm    &operator=(const AForm &copy);
    
    std::string     getName(void) const;
    int             getSigning_grade(void) const;
    int             getExecution_grade(void) const;
    bool            getSigning_status(void) const;
    bool            getExecution_status(void) const;
    void            beSigned(const Bureaucrat &bureaucrat);
    virtual void    execute(Bureaucrat const & executor) const = 0;
    void            check_execute(const Bureaucrat &bureaucrat) const;

    class GradeTooHighException : public std::exception {

        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {

        const char *what() const throw();
    };
protected :
  
private :

    const std::string   _name;
    bool                _signing_status;
    const int           _signing_grade;
    const int           _execution_grade;
};

std::ostream &operator<<(std::ostream &os, const AForm &copy);

#endif