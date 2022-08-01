/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:13:48 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 16:05:46 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/DogClass.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &src) { *this = src; }

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    this->_brain = new Brain();
    this->_brain = rhs._brain;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "looks Like a Dog sound!" << std::endl;
}
