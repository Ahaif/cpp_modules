/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_PhoneBook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:19:15 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/11 09:43:57 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
#define CLASS_PHONEBOOK_HPP

#include "Class_Contact.hpp"

class PhoneBook
{

public:
    PhoneBook();
    ~PhoneBook();

    Contact Book[8];
    int index;
    int j;

    void add_contact(void);
    void search_contact(void);

    void crappy_search(Contact Book[8], int index);
    std::string short_string(std::string src);
};

#endif