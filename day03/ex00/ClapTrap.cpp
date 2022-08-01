/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:55:22 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/17 11:01:29 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_Name = "Nobody";
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
    std::cout << "ClapTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    this->_Name = Name;
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
    std::cout << "ClapTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) { *this = src; }

ClapTrap::~ClapTrap()
{
    if (this->_HitPoints == 0)
        std::cout << "ClapTrap: < " << this->_Name << " > is Dead!" << std::endl;
    else
        std::cout << "ClapTrap: < " << this->_Name << " > is leaving the fight!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    if (this == &rhs)
        return *this;
    this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap: < " << this->_Name << " > attack " << target
              << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int newHitPoint = this->_HitPoints - amount;
    if (newHitPoint <= 0)
        newHitPoint = 0;
    if (this->_HitPoints != 0)
    {
        std::cout << "ClapTrap: < " << this->_Name << " > Take damage of " << amount << std::endl;
        std::cout << "ClapTrap: < " << this->_Name << " > HitPoint get down from "
                  << this->_HitPoints << " to " << newHitPoint << std::endl;
        this->_HitPoints = newHitPoint;
        if (newHitPoint == 0)
            std::cout << "ClapTrap: < " << this->_Name << " > is Dead!" << std::endl;
    }
    else
        std::cout << "ClapTrap: < " << this->_Name << " > is Dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HitPoints == 0)
        std::cout << "ClapTrap: < " << this->_Name << " > is Dead!" << std::endl;
    else
    {
        int newHitPoint = this->_HitPoints + amount;
        std::cout << "ClapTrap: < " << this->_Name << " > adding " << amount << " to his HitPoint" << std::endl;
        std::cout << "ClapTrap: < " << this->_Name << " > HitPoint get down from "
                  << this->_HitPoints << " to " << newHitPoint << std::endl;
    }
}
