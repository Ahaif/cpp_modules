/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrainClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:27:41 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 15:32:09 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/BrainClass.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src) { *this = src; }

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
    if (this == &rhs)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}
