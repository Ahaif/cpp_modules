/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:43:27 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/31 10:33:39 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
// #include <stdlib.h>

int main()
{
    // all those tries will work fine
    std::cout << "|-------------------|all those tries will work fine|-----------------------|" << std::endl;
    try
    {
        ShrubberyCreationForm test("happy");
        Bureaucrat worker("worker", 70);

        std::cout << "|\tForm Name: " << test.GetName() << std::endl;
        std::cout << "|\tForm Status: " << test.GetIssigned() << std::endl;
        std::cout << "|\tForm requirement Grade to Sign: " << test.GetSign() << std::endl;
        std::cout << "|\tForm Requirement Grade to Execute: " << test.GetExu() << std::endl;
        test.beSigned(worker);
        test.execute(worker);
        std::cout << "|\t";
        worker.executeForm(test);
        test.action();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        RobotomyRequestForm test("happy");
        Bureaucrat worker("worker", 7);

        std::cout << "|\tForm Name: " << test.GetName() << std::endl;
        std::cout << "|\tForm Status: " << test.GetIssigned() << std::endl;
        std::cout << "|\tForm requirement Grade to Sign: " << test.GetSign() << std::endl;
        std::cout << "|\tForm Requirement Grade to Execute: " << test.GetExu() << std::endl;
        std::cout << "|\t";
        test.beSigned(worker);
        test.execute(worker);
        std::cout << "|\t";
        worker.executeForm(test);
        // test.action();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        PresidentialPardonForm test("happy");
        Bureaucrat worker("worker", 2);

        std::cout << "|\tForm Name: " << test.GetName() << std::endl;
        std::cout << "|\tForm Status: " << test.GetIssigned() << std::endl;
        std::cout << "|\tForm requirement Grade to Sign: " << test.GetSign() << std::endl;
        std::cout << "|\tForm Requirement Grade to Execute: " << test.GetExu() << std::endl;
        std::cout << "|\t";
        test.beSigned(worker);
        test.execute(worker);
        std::cout << "|\t";
        worker.executeForm(test);
        // test.action();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
