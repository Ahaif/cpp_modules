/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:51:26 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 12:03:43 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap first("first");
    DiamondTrap second("second");

    first.attack("second");
    second.takeDamage(30);
    second.attack("first");
    first.takeDamage(30);
    first.whoAmI();
    second.whoAmI();
    return (0);
}
