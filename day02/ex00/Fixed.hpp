/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:19:20 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/14 13:20:38 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int _FixedPointValue;
    static const int _bits = 8;

public:
    Fixed();
    Fixed(const Fixed &src);
    ~Fixed();
    Fixed &operator=(const Fixed &src);
    int getRawBits(void) const;
    void setRowBits(int const row);
};

#endif