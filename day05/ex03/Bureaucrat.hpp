/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:11:15 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 19:29:01 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
private:
    const std ::string _Name;
    int _Grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string Name, const int Grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &rhs);
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };

    std ::string getName() const;
    int getGrade() const;

    void GardeIncrement();
    void GradeDecrement();

    void signForm(Form &form);

    void executeForm(Form const &form);
};

std ::ostream &operator<<(std::ostream &os, Bureaucrat &brc);

#endif