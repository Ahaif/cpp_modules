/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:53:00 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/11 09:44:32 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Class_Contact.hpp"
#include <iomanip>
#include "Class_PhoneBook.hpp"

int main()
{
    std::string buf;
    PhoneBook Pbook;
    int j = 0;

    while (42)
    {
        std::cout << "PhoneBook ADD | SEARCH | EXIT > ";
        std::getline(std::cin, buf);
        if (buf == "EXIT")
            break;
        else if (buf == "ADD")
            Pbook.add_contact();
        else if (buf == "SEARCH")
            Pbook.search_contact();
    }
    return (0);
}