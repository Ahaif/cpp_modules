/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Zombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:48:48 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 09:27:41 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "The Zombie " << this->_name << " Has Destructor" << std::endl;
}

// std::string Zombie::getname()
// {
//     return (this->_name);
// }

void Zombie::setname(std::string Name)
{
    this->_name = Name;
}

void Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
