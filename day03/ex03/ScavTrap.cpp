/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:53:22 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/18 21:54:03 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_EnergyPoints = 50;
    std::cout << "ScavTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->_EnergyPoints = 50;
    std::cout << "ScavTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) { *this = src; }

ScavTrap::~ScavTrap()
{
    if (this->_HitPoints == 0)
        std::cout << "ScavTrap: < " << this->_Name << " > is Dead!" << std::endl;
    else
        std::cout << "ScavTrap: < " << this->_Name << " > is leaving the fight!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    if (this == &rhs)
        return *this;
    this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap: < " << this->_Name << " > attack " << target
              << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardgate()
{
    std::cout << "ScavTrap: < " << this->_Name << " > has enterred in Gate Kepper mode" << std::endl;
}
