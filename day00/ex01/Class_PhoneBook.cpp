/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_PhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:19:06 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/11 09:43:28 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Contact.hpp"
#include "Class_PhoneBook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook ::PhoneBook()
{
    this->index = 0;
    this->j = 0;
    return;
}

PhoneBook ::~PhoneBook()
{
    return;
}

void PhoneBook ::add_contact(void)
{
    if (this->index == 8)
    {
        std::cout << "# The directory is full the first one will be deleted !" << std::endl;
        if (this->j == 8)
            this->j = 0;
        this->Book[this->j].setAttributes();
        this->j++;
    }
    else
    {
        this->Book[this->index].setAttributes();
        this->index++;
    }
}

void PhoneBook ::search_contact(void)
{

    if (!this->index)
        std::cout << "You have no contacts :'(" << std::endl;
    else
        crappy_search(this->Book, this->index);
}

std::string PhoneBook ::short_string(std::string src)
{
    if (src.size() > 10)
    {
        src.resize(9);
        src.append(".");
    }
    return (src);
}

void PhoneBook ::crappy_search(Contact book[8], int contactCount)
{
    int i;
    std::string buf;

    std::cout << "     index|first name| last name|  nickname" << std::endl;
    i = 0;
    while (i < contactCount)
    {
        std::cout << std::setw(10);
        std::cout << i;
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout << short_string(this->Book[i].getFirstName());
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout << short_string(this->Book[i].getLastName());
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout << short_string(this->Book[i].getNickname());
        std::cout << std::endl;
        i++;
    }
    while (42)
    {
        std::cout << "Enter an index: ";
        std::getline(std::cin, buf);
        i = atoi(buf.c_str());
        if (buf.size() == 1 && buf.at(0) >= '0' && buf.at(0) + 1 <= contactCount + '0')
            break;
        else
            std::cout << "INDEX NOT FOUND, TRY ANOTHER ONE " << std::endl;
    }
    this->Book[i].printAttributes();
}