/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:53:34 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/18 21:53:52 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string Name );
		ScavTrap( const ScavTrap & src );
		~ScavTrap();
		ScavTrap & operator = ( const ScavTrap &rhs );
		void	attack( std::string const & target );
		void	guardgate();
};


#endif