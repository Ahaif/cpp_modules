/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:28:39 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 19:23:35 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

std::string const PresidentialPardonForm::Name = std::string("Presidential Pardon");

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(PresidentialPardonForm::Name, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    Form::operator=(rhs);
    return (*this);
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return ("PresidentialPardonFormException: Form Grade is too Low");
}

const char *PresidentialPardonForm::FormIsNotSigned::what() const throw()
{
    return ("PresidentialPardonFormException: Form Grade is Not signed");
}

void PresidentialPardonForm::action() const
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->GetIssigned() == false)
        throw PresidentialPardonForm::FormIsNotSigned();
    else if (this->GetExu() < executor.getGrade())
        throw PresidentialPardonForm::GradeTooLowException();
    this->action();
}
