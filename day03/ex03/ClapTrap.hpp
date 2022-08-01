/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:51:58 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/21 12:08:59 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _Name;
    int _HitPoints;
    int _EnergyPoints;
    int _AttackDamage;

public:
    ClapTrap();
    ClapTrap(std::string);
    ClapTrap(const ClapTrap &src);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &rhs);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
