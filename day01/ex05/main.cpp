/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:56:53 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/15 11:07:29 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl Harl;
    if (ac != 1)
        Harl.complain(av[1]);
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
