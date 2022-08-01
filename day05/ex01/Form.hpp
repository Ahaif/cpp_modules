/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:49:31 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 15:27:29 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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
        const char *what() const throw();
    };
    class GradeTooLowException : public std ::exception
    {
        const char *what() const throw();
    };

    std ::string GetName() const;
    unsigned int GetSign() const;
    unsigned int GetExu() const;
    bool GetIssigned() const;

    void beSigned(Bureaucrat &brc);
};

std ::ostream &operator<<(std ::ostream &os, Form &brc);

#endif