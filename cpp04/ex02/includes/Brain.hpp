/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:11:19 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/02/09 11:51:54 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define CYAN "\x1B[36m"
# define GRAY "\x1B[90m"
# define END "\033[0m"
#include <iostream>

class Brain {

public :

    Brain();
    Brain(const Brain &copy);
    virtual ~Brain();
    
    Brain       &operator=(const Brain &copy);
    void        setIdeas(const std::string &ideas);
    std::string *getIdeas(void);
    
protected :

  
private :

    std::string _ideas[100];
};


#endif