/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHumanB.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:35:20 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 10:50:55 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassHumanB.hpp"

HumanB::HumanB(string Name) : _Name(Name), _Weapon(NULL) {}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor\n";
}

string HumanB::getName()
{
    return (this->_Name);
}

void HumanB::setName(string Name)
{
    this->_Name = Name;
}

void HumanB::attack()
{
    if (this->_Weapon != NULL)
        std::cout << this->getName() << " attacks with his " << _Weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->_Weapon = &Weapon;
}
