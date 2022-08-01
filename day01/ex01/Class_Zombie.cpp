/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Zombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:33:01 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 10:23:07 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "The Zombie " << this->_Name << " Has Destructor" << std::endl;
}

// std::string Zombie::getname()
// {
//     return (this->_Name);
// }

void Zombie::setname(std::string Name)
{
    this->_Name = Name;
}

void Zombie::announce(void)
{
    std::cout << this->_Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
