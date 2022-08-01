/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:14:06 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 16:04:48 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/CatClass.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &src) { *this = src; }

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    this->_brain = new Brain();
    this->_brain = rhs._brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "looks like a Cat sound!" << std::endl;
}
