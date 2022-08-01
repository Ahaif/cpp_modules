/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHumanA.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:35:07 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 10:43:31 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSHUMANA_HPP
#define CLASSHUMANA_HPP

#include "ClassWeapon.hpp"

class HumanA
{
private:
    string _Name;
    Weapon &_Weapon;

public:
    HumanA(string Name, Weapon &Weapon);
    ~HumanA();
    void attack();
    string getName();
    void setName(string Name);
};

#endif
