/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:38:28 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/21 11:39:56 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

    ClapTrap clapper("clapper");
    ScavTrap scaver("scaver");
    FragTrap frager("frager");

    ScavTrap();

    scaver.guardgate();
    frager.highFivesGuys();
    clapper.attack("scaver");
    scaver.takeDamage(20);
    frager.attack("you");
    scaver.attack("clapper");
    clapper.takeDamage(20);
    return (0);
}
