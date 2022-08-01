/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:33:21 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 09:36:17 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zom;

    zom = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zom[i].setname(name);
        zom[i].announce();
    }
    return (zom);
}
