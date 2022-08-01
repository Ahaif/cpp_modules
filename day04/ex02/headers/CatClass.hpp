/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:14:12 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 16:04:17 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATCLASS_HPP
#define CATCLASS_HPP

#include "Animal.hpp"
#include "BrainClass.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;

public:
    Cat();
    Cat(const Cat &src);
    ~Cat();
    Cat &operator=(const Cat &rhs);
    void makeSound() const;
};

#endif