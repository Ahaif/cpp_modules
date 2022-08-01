/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:13:21 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/29 08:39:55 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/CatClass.hpp"
#include "headers/DogClass.hpp"
#include "headers/WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *Wrongmeta = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << Wrongmeta->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    Wrongmeta->makeSound();

    delete j;
    delete i;
    delete meta;
    delete Wrongmeta;
}
