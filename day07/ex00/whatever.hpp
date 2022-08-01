/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:03:07 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/28 10:03:48 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &x, T &y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T &min(T &x, T &y)
{
    return ((x < y) ? x : y);
}

template <typename T>
T &max(T &x, T &y)
{
    return ((x > y) ? x : y);
}
#endif
