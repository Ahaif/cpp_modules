/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:05:02 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/28 10:05:06 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, int size, void (*f)(T const &val))
{
    for (int i = 0; i < size; i++)
        (*f)(arr[i]);
}

template <typename T>
void print(T const &val)
{
    std::cout << val << std::endl;
}

#endif
