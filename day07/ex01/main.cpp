/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:04:19 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/03/28 10:07:42 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int arr[4] = {7, 77, 10, 777};
    iter(arr, 4, &print);
    std::cout << "--------Float--------" << std::endl;

    float floatR[5] = {0.0f, 1.1f, 2.2f, 3.3f, 4.4f};
    iter(floatR, 5, &print);
    std::cout << "--------double--------" << std::endl;

    double doubleR[5] = {0.00, 1.11, 2.22, 3.33, 4.44};
    iter(doubleR, 5, &print);
    std::cout << "--------bool--------" << std::endl;

    bool boolR[2] = {false, true};
    iter(boolR, 2, &print);
    std::cout << "--------string--------" << std::endl;

    std::string stringR[5] = {"phrase 1", "phrase 2", "templates", "are", "fun"};
    iter(stringR, 5, &print);
    std::cout << "--------|string but with size == 2|--------" << std::endl;
    iter(stringR, 2, &print);
    std::cout << "--------|string but with size == 0|--------" << std::endl;
    iter(stringR, 0, &print);
    return 0;
}
