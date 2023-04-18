/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:18:50 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/16 16:14:23 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

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
#include <cstdlib>
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm {

public : 

    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm&copy);
    ~RobotomyRequestForm();
    RobotomyRequestForm  &operator=(const RobotomyRequestForm&copy);

    void execute(Bureaucrat const & executor) const;

    class GradeTooHighException : public std::exception {

        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {

        const char *what() const throw();
    };

protected :

private :

    std::string _target;

};

#endif