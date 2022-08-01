/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:49:09 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 19:22:17 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form ::Form() : _Name(), _GradeSign(), _GradeExu()
{
    throw Form::GradeTooLowException();
}

Form ::Form(const std ::string Name, int GradeSign, int GradeExu) : _Name(Name), _GradeSign(GradeSign), _GradeExu(GradeExu)
{
    if (GradeSign <= 0 || GradeExu <= 0)
        throw Form::GradeTooHighException();
    if (GradeSign > 150 || GradeExu > 150)
        throw Form::GradeTooLowException();

    this->_issigned = false;
}

Form ::Form(const Form &src) : _Name(src._Name), _GradeSign(src._GradeSign), _GradeExu(src._GradeExu)
{
    *this = src;
};

Form ::~Form(){};

Form &Form ::operator=(const Form &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_issigned = rhs._issigned;
    return (*this);
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("FORM Exception: Grade too Low");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("FORM Exception: Grade too High");
}

std ::string Form ::GetName() const { return (this->_Name); };
unsigned int Form ::GetSign() const { return (this->_GradeSign); };
int Form ::GetExu() const { return (this->_GradeExu); }
bool Form ::GetIssigned() const { return (this->_issigned); };

void Form ::beSigned(Bureaucrat &brs)
{

    if (brs.getGrade() <= this->_GradeSign)
        this->_issigned = true;
    else
        throw Form::GradeTooLowException(); // check possibility to remove throw
}

std::ostream &operator<<(std::ostream &os, Form &form)
{
    os << "The Form " << form.GetName() << ", need a Bureaucrat has Grade " << form.GetSign() << " or higher to be able to sign, and need a Bureaucrat has Grade "
       << form.GetExu() << " or higher to be execute ";
    if (form.GetIssigned() == true)
        os << "and it's signed" << std::endl;
    else
        os << "and it's not signed" << std::endl;
    return (os);
}
