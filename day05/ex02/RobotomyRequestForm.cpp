/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:40:50 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 18:45:43 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

std::string const RobotomyRequestForm::Name = std::string("Robotomy Request");

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(RobotomyRequestForm::Name, 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    Form::operator=(rhs);
    return (*this);
}

const char *RobotomyRequestForm::GradeTooLowException::what() const throw()
{
    return ("RobotomyRequestFormException: Form Grade is too Low");
}

const char *RobotomyRequestForm::FormIsNotSigned::what() const throw()
{
    return ("RobotomyRequestFormException: Form Grade is Not signed");
}

void RobotomyRequestForm::action() const
{
    srand((unsigned int)time(NULL));
    int IsSuccessful = rand() % 2;
    if (IsSuccessful == 1)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " has not been robotomized successfully" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->GetIssigned() == false)
        throw RobotomyRequestForm::FormIsNotSigned();
    else if (this->GetExu() < executor.getGrade())
        throw RobotomyRequestForm::GradeTooLowException();
    this->action();
}
