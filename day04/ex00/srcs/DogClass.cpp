/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:13:48 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 12:49:31 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/DogClass.hpp"

Dog::Dog()
{
    this->_type = "Dog";
}

Dog::Dog(const Dog &src) { *this = src; }

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "looks Like a Dog sound!" << std::endl;
}
