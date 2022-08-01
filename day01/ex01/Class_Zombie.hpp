/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Zombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:32:51 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/12 10:23:02 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ZOMBIE_HPP
#define CLASS_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _Name;

public:
    Zombie();
    ~Zombie();
    void announce(void);
    // std::string getname();
    void setname(std::string Name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
