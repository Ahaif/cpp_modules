/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:32:25 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/15 20:40:52 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Zombie.hpp"

int main()
{
    Zombie *zom;
    std::string name;
    int nbr;

    std::cout << "Enter number of Zombies in your horde (int) : ";
    std::cin >> nbr;
    if (std::cin.fail())
    {
        std::cout << "Wrong input!\n";
        return (1);
    }
    if (nbr <= 0)
    {
        std ::cout << "nbr of zombie cant be 0 or less" << std ::endl;
        return (1);
    }
    std::cin.ignore();
    std::cout << "Name of your Zombies: ";
    getline(std::cin, name);
    zom = zombieHorde(nbr, name);
    delete[] zom;
    return (0);
}