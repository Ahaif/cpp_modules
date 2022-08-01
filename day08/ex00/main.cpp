/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:45:02 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/06/22 11:58:34 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easy_find(T &x, int value)
{
   typename T :: iterator elem = std ::find(x.begin(), x.end(),value);
   if (elem== x.end())
    {
        return(0);
    }
    return(1);
}


int main()
{
    std :: vector <int> v;
    v.reserve(100);

    for (int i = 0; i < 100; i++)
        v.push_back(i);
    
    std :: random_shuffle(v.begin(), v.end());

    int result = easy_find(v, -50);
    if (result == 0)
        std::cout << "No such item." << std::endl;
	else
		std::cout << "Item found" << std::endl;
	return 0;

}