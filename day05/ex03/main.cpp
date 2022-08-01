/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:43:27 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/04/01 14:22:36 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
// #include <stdlib.h>

int main()
{
    // try
    // {
    //     Intern someRandomIntern;
    //     Form *rrf;
    //     Bureaucrat worker("worker", 7);

    //     rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    //     std::cout << "Form Name: " << rrf->GetName() << std::endl;
    //     std::cout << "Form Status: " << rrf->GetIssigned() << std::endl;
    //     std::cout << "Form requirement Grade to Sign: " << rrf->GetSign() << std::endl;
    //     std::cout << "Form Requirement Grade to Execute: " << rrf->GetExu() << std::endl;
    //     rrf->beSigned(worker);
    //     rrf->execute(worker);
    //     worker.executeForm(*rrf);
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    try
    {
        Intern someRandomIntern;
        Form *rrf;
        Bureaucrat worker("worker", 7);

        rrf = someRandomIntern.makeForm("Some Random Form", "Bender");
        std::cout << "Form Name: " << rrf->GetName() << std::endl;
        std::cout << "Form Status: " << rrf->GetIssigned() << std::endl;
        std::cout << "Form requirement Grade to Sign: " << rrf->GetSign() << std::endl;
        std::cout << "Form Requirement Grade to Execute: " << rrf->GetExu() << std::endl;
        rrf->beSigned(worker);
        rrf->execute(worker);
        worker.executeForm(*rrf);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
