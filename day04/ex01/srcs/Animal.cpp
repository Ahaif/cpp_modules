/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:47:47 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 16:02:28 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src) { *this = src; }

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

std::string Animal::getType() const { return (this->_type); }

void Animal::makeSound() const
{
    std::cout << "looks like an Animal sounds!" << std::endl;
}
