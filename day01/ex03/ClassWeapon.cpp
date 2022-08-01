/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWeapon.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:34:35 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/15 10:32:43 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassWeapon.hpp"

Weapon::Weapon(string Type)
{
    this->_Type = Type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor\n";
}

string const &Weapon::getType()
{
    return this->_Type;
}

void Weapon::setType(string _type)
{
    this->_Type = _type;
}
