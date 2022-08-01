/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:13:53 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 16:04:39 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCLASS_HPP
#define DOGCLASS_HPP

#include "Animal.hpp"
#include "BrainClass.hpp"
class Dog : public Animal
{
private:
    Brain *_brain;

public:
    Dog();
    Dog(const Dog &src);
    ~Dog();
    Dog &operator=(const Dog &rhs);
    void makeSound() const;
};

#endif
