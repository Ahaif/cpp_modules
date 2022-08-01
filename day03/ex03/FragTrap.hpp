/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:53:04 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/18 21:54:27 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string Name);
    FragTrap(const FragTrap &src);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &rhs);
    void highFivesGuys(void);
};

#endif
