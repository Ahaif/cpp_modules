/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:47:34 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/11 10:00:20 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void Contact::setAttributes()
{
    std::string buf;

    std::cout << "Enter First Name: ";
    std::getline(std::cin, this->_f_name);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, this->_l_name);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin, this->_nickname);

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, this->_phone);

    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, this->_darkestSecret);
}

void Contact::printAttributes()
{
    std::cout << "------" << std::endl;
    std::cout << "First Name: ";
    std::cout << this->_f_name << std::endl;
    std::cout << "Last Name: ";
    std::cout << this->_l_name << std::endl;
    std::cout << "Nickname: ";
    std::cout << this->_nickname << std::endl;

    std::cout << "Darkest Secret: ";
    std::cout << this->_darkestSecret << std::endl;
    std::cout << "------" << std::endl;
}

std::string Contact::getFirstName()
{
    return (this->_f_name);
}

std::string Contact::getLastName()
{
    return (this->_l_name);
}

std::string Contact::getNickname()
{
    return (this->_nickname);
}

// std::string Contact::getDarkestSecret()
// {
//     return (this->_darkestSecret);
// }