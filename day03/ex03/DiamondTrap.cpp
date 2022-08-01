/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:52:34 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/18 21:55:04 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->_Name = "Nobody";
    std::cout << "DiamondTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name")
{
    this->_Name = Name;
    std::cout << "DiamondTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) { *this = src; }

DiamondTrap::~DiamondTrap()
{
    if (this->_HitPoints == 0)
        std::cout << "DiamondTrap: < " << this->_Name << " > is Dead!" << std::endl;
    else
        std::cout << "DiamondTrap: < " << this->_Name << " > is leaving the fight!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this == &rhs)
        return *this;
    this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return *this;
}

void DiamondTrap::attack(std::string const &target) { ScavTrap::attack(target); }

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap: My DiamondTrap Name is " << this->_Name << std::endl;
    std::cout << "DiamondTrap: My ClapTrap Name is " << this->ClapTrap::_Name << std::endl;
}
