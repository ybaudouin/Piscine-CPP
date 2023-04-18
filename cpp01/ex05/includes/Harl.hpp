/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:00:56 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/12 16:21:18 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLAS_HPP
# define HARL_CLAS_HPP

#include <iostream>

class   Harl {

public : 

    Harl(void);
    ~Harl(void);
    void    complain(std::string level);

private :

    std::string _level[4];
    void        debug(void);
    void        info(void);
    void        warning(void);
    void        error(void);
};

#endif