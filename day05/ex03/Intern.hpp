/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:53:26 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 20:21:28 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &src);
    ~Intern();
    Intern &operator=(const Intern &rhs);
    class FormNotFound : public std::exception
    {
        virtual const char *what() const throw();
    };
    Form *ShrubberyCreation(std::string target);
    Form *RobotomyRequest(std::string target);
    Form *PresidentialPardon(std::string target);
    Form *makeForm(std::string Type, std::string target);
};

#endif
