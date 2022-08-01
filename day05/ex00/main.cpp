/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:43:27 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 12:15:45 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // test the GardeIncrement()
    try
    {
        Bureaucrat abdel("haif", 2);

        std::cout << abdel;
        abdel.GardeIncrement();
        std::cout << abdel;
        abdel.GardeIncrement();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    // test the GardeDecrement()
    try
    {
        Bureaucrat sameone("Sameone", 149);

        std::cout << sameone;
        sameone.GradeDecrement();
        std::cout << sameone;
        sameone.GradeDecrement();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    // test the Bureaucrat constractor
    try
    {
        Bureaucrat sameone("Sameone", 999);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat sameone("Sameone", 0);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
