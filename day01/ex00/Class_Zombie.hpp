/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class_Zombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:48:32 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/15 10:22:18 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ZOMBIE_HPP
#define CLASS_ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{

private:
    std ::string _name;

public:
    Zombie();
    ~Zombie();

    void announce(void);
    // std::string getname();
    void setname(std::string Name);
};
void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif