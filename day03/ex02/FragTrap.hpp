/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:52:38 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/18 16:22:44 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap();
    FragTrap(std ::string Name);
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const FragTrap &rhs);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif