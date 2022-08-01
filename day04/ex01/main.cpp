/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:22:19 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/22 10:26:48 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/CatClass.hpp"
#include "headers/DogClass.hpp"

int main()
{
    int arr_size = 4;
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    Animal *animals[arr_size];

    for (int k = 0; k < (arr_size / 2); k++)
        animals[k] = new Dog();
    for (int k = (arr_size / 2); k < arr_size; k++)
        animals[k] = new Cat();
    for (int k = 0; k < arr_size; k++)
        delete animals[k];

    delete j; //should not create a leak
    delete i;
}
