/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Contact.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:47:24 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/11 10:00:34 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
#define CLASS_CONTACT_HPP
#include <string>
#include <iostream>

class Contact
{

private:
    std::string _f_name;
    std::string _l_name;
    std::string _nickname;
    std::string _phone;
    std::string _darkestSecret;

public:
    Contact();
    ~Contact();

    void setAttributes();
    void printAttributes();

    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    // std::string getDarkestSecret();
};

#endif