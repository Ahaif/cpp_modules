/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:50:04 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/11 14:55:18 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zom;

    zom = new Zombie;
    zom->setname(name);
    return (zom);
}
