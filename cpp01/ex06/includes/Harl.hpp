/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:52:09 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/13 11:42:29 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLAS_HPP
#define HARL_CLAS_HPP

#include <iostream>

class Harl
{

public:
    Harl(void);
    ~Harl(void);
    int     complain(std::string level);
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

private:
    std::string _level[4];
};
#endif