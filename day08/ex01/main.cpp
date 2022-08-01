/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:03:47 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/06/22 12:03:55 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

//main subject test
try {
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}
catch (const std::exception& e)
{
    std::cerr << e.what() << '\n';

}
//iterators template test
	try
	{
		std::vector<int> random;
		Span sp = Span(10000);
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			const int value = rand();
			random.push_back(value);
		}
		sp.addNumber(random.begin(), random.end());
		std::cout << sp.shortSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    	try
	{
		std::vector<int> random;
		Span sp = Span(7);
		srand(time(NULL));
		for (int i = 0; i < 77; i++)
		{
			const int value = rand();
			random.push_back(value);
		}
		sp.addNumber(random.begin(), random.end());
		std::cout << sp.shortSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


return 0;
}

