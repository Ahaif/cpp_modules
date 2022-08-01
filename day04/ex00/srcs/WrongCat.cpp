/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:45:25 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 12:48:56 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongCat.hpp"

WrongCat::WrongCat() { this->_type = "WrongCat"; }

WrongCat::WrongCat(const WrongCat &src) { *this = src; }

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "looks like a Wrong Cat sound!" << std::endl;
}
