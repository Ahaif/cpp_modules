/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:11:15 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 12:11:00 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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
    unsigned int getGrade() const;

    void GardeIncrement();
    void GradeDecrement();
};

std ::ostream &operator<<(std::ostream &os, Bureaucrat &brc);

#endif