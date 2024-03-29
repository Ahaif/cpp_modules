/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:52:56 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/18 21:54:40 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_HitPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->_HitPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) { *this = src; }

FragTrap::~FragTrap()
{
    if (this->_HitPoints == 0)
        std::cout << "FragTrap: < " << this->_Name << " > is Dead!" << std::endl;
    else
        std::cout << "FragTrap: < " << this->_Name << " > is leaving the fight!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    if (this == &rhs)
        return *this;
    this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: < " << this->_Name << ">  requested for a Hight Fives" << std::endl;
}
