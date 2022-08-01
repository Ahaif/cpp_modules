/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:38:28 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/21 11:24:53 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clapper("clapper");
    ScavTrap scaver("scaver");

    scaver.guardgate();
    clapper.attack("scaver");
    scaver.takeDamage(20);
    scaver.attack("clapper");

    return (0);
}
