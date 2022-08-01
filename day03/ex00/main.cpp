/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:55:02 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/21 11:12:57 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap abdel("target1"); // instance1-2
    ClapTrap haif("target2");

    abdel.beRepaired(10);
    haif.attack("target2");
    abdel.takeDamage(5);
    haif.beRepaired(10);
    abdel.attack("mehdi");
    haif.takeDamage(6);
    return (0);
}
