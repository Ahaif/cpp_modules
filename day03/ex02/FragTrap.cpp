/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:53:22 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/21 11:29:11 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_Name = "Nobody";
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}
FragTrap::FragTrap(std ::string Name) : ClapTrap(Name)
{
    this->_Name = Name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}
FragTrap::FragTrap(FragTrap const &src)
{
    *this = src;
}

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
