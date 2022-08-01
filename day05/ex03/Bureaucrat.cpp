/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:11:21 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 19:30:14 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : _Name(Name)
{
    if (Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (Grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_Grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _Name(src._Name)
{
    *this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_Grade = rhs._Grade;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("BureaucratException: Grade too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("BureaucratException: Grade too Low");
}

std::string Bureaucrat::getName() const { return (this->_Name); }

int Bureaucrat::getGrade() const { return (this->_Grade); }

void Bureaucrat::GradeDecrement()
{
    if (this->_Grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_Grade++;
}

void Bureaucrat::signForm(Form &form)
{
    if (form.GetIssigned() == true)
        std ::cout << this->_Name << " signed " << form.GetName() << std ::endl;
    else
        std ::cout << this->_Name << " can not signe because " << form.GetName() << " is not signed " << std ::endl;
}

void Bureaucrat::GardeIncrement()
{
    if (this->_Grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_Grade--;
}

void Bureaucrat::executeForm(Form const &form)
{
    if (form.GetExu() < this->_Grade)
        throw Bureaucrat::GradeTooLowException();
    std::cout << this->_Name << " executes " << form.GetName() << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &brc)
{
    os << brc.getName() << ", bureaucrat grade " << brc.getGrade() << std::endl;
    return (os);
}
