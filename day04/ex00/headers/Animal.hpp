/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:47:16 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 12:47:31 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal &src);
    virtual ~Animal();
    Animal &operator=(const Animal &rhs);
    std::string getType() const;
    virtual void makeSound() const;
};

#endif
