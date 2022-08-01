/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:50:33 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/19 11:50:34 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _Name;
	public:
		DiamondTrap();
		DiamondTrap( std::string Name );
		DiamondTrap( const DiamondTrap &src );
		~DiamondTrap();
		DiamondTrap & operator = ( const DiamondTrap &rhs );
		void	attack( std::string const & target );
		void	whoAmI();
};


#endif
