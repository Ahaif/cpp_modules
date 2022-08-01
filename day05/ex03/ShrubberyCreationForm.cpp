/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:45:58 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 18:48:13 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

std::string const ShrubberyCreationForm::Name = std::string("Shrubbery Creation");

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(ShrubberyCreationForm::Name, 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    Form::operator=(rhs);
    return (*this);
}

const char *ShrubberyCreationForm::FileCannotCreate::what() const throw()
{
    return ("ShrubberyCreationFormException: A Problem Happened While Creating The File");
}

const char *ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
    return ("ShrubberyCreationFormException: Form Grade is too Low");
}

const char *ShrubberyCreationForm::FormIsNotSigned::what() const throw()
{
    return ("ShrubberyCreationFormException: Form Grade is Not signed");
}

void ShrubberyCreationForm::action() const
{
    std::fstream TreeFile(this->_target + "_shrubbery", std::fstream::out);
    if (!TreeFile.is_open() || TreeFile.bad())
        throw ShrubberyCreationForm::FileCannotCreate();
    TreeFile << "          .     .  .      #     .      .          .\n     .       .      .     #       .           .\n        .      .         ###            .      .      .\n      .      .   '#:. .:##'##:. .:#'  .      .\n          .      . '####'###'####'  .\n       .     '#:.    .:#'###'#:.    .:#'  .        .       .\n  .             '#########'#########'        .        .\n        .    '#:.  '####'###'####'  .:#'   .       .\n     .     .  '#######''##'##''#######'                  .\n                .'##'#####'#####'##'           .      .\n    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .\n      .     '#######'##'#####'##'#######'      .     .\n    .    .     '#####''#######''#####'    .      .\n            .     '      000      '    .     .\n       .         .   .   000     .        .       .\n.. .. ..................O000O........................ ......\n"
             << std::endl;
    TreeFile.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->GetIssigned() == false)
        throw ShrubberyCreationForm::FormIsNotSigned();
    else if (this->GetExu() < executor.getGrade())
        throw ShrubberyCreationForm::GradeTooLowException();
    this->action();
}
