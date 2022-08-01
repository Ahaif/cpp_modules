/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:43:27 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/31 10:30:52 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // test the Form defult constructor
    try
    {
        Form test;

        std::cout << test.GetName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    // test the test the form pram constructor
    try
    {
        Form test("test", 10, 130);

        std::cout << test.GetName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    // test the a working form declaration
    try
    {
        Form contract("Contract", 1, 5);
        Bureaucrat director("Director", 1);

        std::cout << contract;

        director.signForm(contract);
        contract.beSigned(director);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    //sign a form with a lower garde? let's see
    try
    {
        Form Project("Project Approval", 6, 10);
        Bureaucrat worker("worker", 77);

        std::cout << Project;

        worker.signForm(Project);
        Project.beSigned(worker);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
