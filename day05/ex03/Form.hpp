/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:49:31 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/31 10:16:23 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
private:
    const std ::string _Name;
    const int _GradeSign;
    const int _GradeExu;
    bool _issigned;

public:
    Form();
    Form(const std::string Name, int GradeSigne, int GradeExu);
    Form(const Form &src);
    ~Form();

    Form &operator=(const Form &rhs);
    class GradeTooHighException : public std ::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std ::exception
    {
        virtual const char *what() const throw();
    };

    std ::string GetName() const;
    unsigned int GetSign() const;
    int GetExu() const;
    bool GetIssigned() const;

    void beSigned(Bureaucrat &brc);
    virtual void execute(Bureaucrat const &executor) const = 0;
    virtual void action() const = 0;
};

std ::ostream &operator<<(std ::ostream &os, Form &brc);

#endif