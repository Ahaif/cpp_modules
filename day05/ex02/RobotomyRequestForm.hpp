/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:41:26 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/24 18:41:50 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
    std::string const _target;

public:
    static std::string const Name;
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
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