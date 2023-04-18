/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:18:26 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/16 11:16:48 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

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
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {

public : 

    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &copy);

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