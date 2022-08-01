/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:59:12 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/16 10:00:02 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int _FixedPointValue;
    static const int _bits = 8;

public:
    Fixed();
    Fixed(const int number);
    Fixed(const float fnumber);
    Fixed(const Fixed &src);
    ~Fixed();
    Fixed &operator=(const Fixed &src);
    int getRawBits(void) const;
    void setRowBits(int const row);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &op, const Fixed &a);

#endif
