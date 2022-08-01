/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:14:06 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 12:49:43 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/CatClass.hpp"

Cat::Cat() { this->_type = "Cat"; }

Cat::Cat(const Cat &src) { *this = src; }

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "looks like a Cat sound!" << std::endl;
}
