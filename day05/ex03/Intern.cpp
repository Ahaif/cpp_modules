/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:52:52 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/04/01 12:10:41 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) { *this = src; }

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &rhs)
{
    if (this == &rhs)
        return (*this);
    return (*this);
}

const char *Intern::FormNotFound::what() const throw()
{
    return ("InterException: Form Not Found!");
}

Form *Intern::ShrubberyCreation(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::RobotomyRequest(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::PresidentialPardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string Type, std::string target)
{
    std::string Forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *(Intern::*form[])(std::string target) = {
        form[0] = &Intern::ShrubberyCreation,
        form[1] = &Intern::RobotomyRequest,
        form[2] = &Intern::PresidentialPardon};
    for (int i = 0; i < 3; i++)
        if (Forms[i] == Type)
        {
            std::cout << "Intern creates " << Type << std::endl;
            return ((this->*form[i])(target));
        }
    throw Intern::FormNotFound();
}
