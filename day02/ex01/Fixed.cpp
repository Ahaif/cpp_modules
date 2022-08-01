/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:58:58 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 09:40:04 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_FixedPointValue = 0;
}

Fixed::Fixed(const int number)
{
    std::cout << "Int constructor called" << std::endl;
    this->_FixedPointValue = number << this->_bits;
}

Fixed::Fixed(const float fnumber)
{
    std::cout << "Float constructor called" << std::endl;
    this->_FixedPointValue = (int)(roundf(fnumber * (1 << this->_bits)));
    std::cout << _FixedPointValue << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_FixedPointValue = src.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_FixedPointValue = src.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_FixedPointValue);
}

void Fixed::setRowBits(int const row)
{
    this->_FixedPointValue = row;
}

float Fixed::toFloat() const
{
    return ((float)this->_FixedPointValue / (1 << this->_bits));
}

int Fixed::toInt() const
{
    return ((int)(this->_FixedPointValue >> this->_bits));
}
std::ostream &operator<<(std::ostream &op, const Fixed &a)
{
    op << a.toFloat();
    return (op);
}
