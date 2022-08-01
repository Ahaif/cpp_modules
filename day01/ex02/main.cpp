/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:18:53 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 10:33:05 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::string;

int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    std::cout << "The Address  memory of the string: \r\t\t\t\t\t\t" << &str << std::endl;
    std::cout << "The Address of the stringPTR: \r\t\t\t\t\t\t" << stringPTR << std::endl;
    std::cout << "The Address of the  stringERF: \r\t\t\t\t\t\t" << &stringREF << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;
    std::cout << "Display the string using the pointer: \r\t\t\t\t\t\t" << *stringPTR << std::endl;
    std::cout << "Display the string using the reference: \r\t\t\t\t\t\t" << stringREF << std::endl;
}
