/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:44:56 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 12:48:37 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) { *this = src; }

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

std::string WrongAnimal::getType() const { return (this->_type); }

void WrongAnimal::makeSound() const
{
    std::cout << "looks like a Wrong Animal sounds!" << std::endl;
}
