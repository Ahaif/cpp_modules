/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:50:25 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 09:31:27 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *zom;

    zom = newZombie(name);
    zom->announce();
    delete zom;
}
