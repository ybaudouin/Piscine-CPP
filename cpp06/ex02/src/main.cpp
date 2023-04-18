/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:31:32 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/03/16 13:54:50 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {

    srand(time(NULL));
    int nb = (rand() % 3);
    switch (nb) {
        case 0 :
            std::cout << "class A was generated !" << std::endl;
            return new A;
        case 1 :
            std::cout << "class B was generated !" << std::endl;
            return new B;
        default :
            std::cout << "class C was generated !" << std::endl;
            return new C;
    }
}

void identify(Base* p) {

        if (dynamic_cast<A*>(p) != NULL)
            std::cout << "Pointer to class A was identified !" << std::endl;
        if (dynamic_cast<B*>(p) != NULL)
            std::cout << "Pointer to class B was identified !" << std::endl;
        if (dynamic_cast<C*>(p) != NULL)
            std::cout << "Pointer to class C was identified !" << std::endl; 
}

void identify(Base& p) {
    
    try {

        p = dynamic_cast<A&>(p);
        std::cout << "Reference to class A was identified !" << std::endl;
    }
    catch(const std::exception &e){
    }
    try {

        p = dynamic_cast<B&>(p);
        std::cout << "Reference to class B was identified !" << std::endl;
    }
    catch(const std::exception &e){
    }
    try {

        p = dynamic_cast<C&>(p);
        std::cout << "Reference to class C was identified !" << std::endl;
    }
    catch(const std::exception &e){
    }
}

int main (){

    Base    *p;
    
    p = generate();
    identify(p);
    identify(*p);
    delete p;
}