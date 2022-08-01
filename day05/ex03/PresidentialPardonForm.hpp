/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:28:59 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 18:31:46 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
    std::string const _target;

public:
    static std::string const Name;
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class FormIsNotSigned : public std::exception
    {
        virtual const char *what() const throw();
    };
    void action() const;
    void execute(Bureaucrat const &executor) const;
};

#endif
