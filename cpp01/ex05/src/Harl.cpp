/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:01:13 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/12 16:21:45 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {

    std::cout << "Wild Harl appeared" << std::endl;  
    _level[0] = "DEBUG";
    _level[1] = "INFO";
    _level[2] = "WARNING";
    _level[3] = "ERROR";
}

Harl::~Harl(void) {

    std::cout << "Harl Fainted" << std::endl;
}

void    Harl::debug(void) {

    std::cout << "I love having extra bacon for my 7XL";
    std::cout << "-double-cheese-triple-pickle-specialketchup burger.";
    std::cout << " I really do !" << std::endl;
}

void    Harl::info(void) {

    std::cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << ". You didn't put enough bacon in my burger !";
    std::cout << " If you did, I wouldn't be asking for more !" << std::endl;
}

void    Harl::warning(void) {

    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << " I've been coming for years whereas you started";
    std::cout << "working here since last month." << std::endl;
}

void    Harl::error(void) {

    std::cout << "This is unacceptable !";
    std::cout << " I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level) {

    void    (Harl::*fun[4])(void);
    (fun[0]) = &Harl::debug;
    (fun[1]) = &Harl::info;
    (fun[2]) = &Harl::warning;
    (fun[3]) = &Harl::error;
   
    for (int i = 0; i < 4; ++i){

        if (!_level[i].compare(level)) {

            (this->*fun[i])();
        }
    }
}