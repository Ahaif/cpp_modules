/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHumanA.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:35:12 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 10:47:09 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassHumanA.hpp"

HumanA::HumanA(string Name, Weapon &Weapon) : _Name(Name), _Weapon(Weapon) {}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor\n";
}

string HumanA::getName()
{
    return (this->_Name);
}

void HumanA::setName(string Name)
{
    this->_Name = Name;
}

void HumanA::attack()
{
    std::cout << this->getName() << " attacks with his " << _Weapon.getType() << std::endl;
}