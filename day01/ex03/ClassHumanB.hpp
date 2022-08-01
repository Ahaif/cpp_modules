/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHumanB.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:35:32 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 10:50:04 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSHUMANB_HPP
#define CLASSHUMANB_HPP

#include "ClassWeapon.hpp"

class HumanB
{
private:
    string _Name;
    Weapon *_Weapon;

public:
    HumanB(string Name);
    ~HumanB();
    void attack();
    string getName();
    void setName(string Name);
    void setWeapon(Weapon &Weapon);
};

#endif
