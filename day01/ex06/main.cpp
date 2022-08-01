/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:50:21 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/15 11:13:45 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	std::string moods[] = {"debug", "info", "warning", "error"};
	if (ac != 1)
	{
		int i = 0;
		for (; i < 4; i++)
			if (moods[i] == av[1])
				break;
		switch (i)
		{
		case 0:
			while (i < 4)
				harl.complain(moods[i++]);
			break;
		case 1:
			while (i < 4)
				harl.complain(moods[i++]);
			break;
		case 2:
			while (i < 4)
				harl.complain(moods[i++]);
			break;
		case 3:
			while (i < 4)
				harl.complain(moods[i++]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
}
