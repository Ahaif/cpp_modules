/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaifoul <ahaifoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:04:05 by ahaifoul          #+#    #+#             */
/*   Updated: 2022/06/22 12:04:12 by ahaifoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span :: Span(unsigned int N): _N(N){}
Span :: Span(const Span &src) {*this = src;}
Span :: ~Span(){}

Span &Span :: operator=( const Span & rhs )
{
    if (this == &rhs)
        return (*this);
    this->_N = rhs._N;
	this->_vec = rhs._vec;
	return (*this);
}

const char* Span :: NoSpan :: what() const throw()
{
    return("Span Exception: No Space Left in Container !");
}
const char* Span :: NoSpaceLeft :: what() const throw()
{
    return("Span Exception: No Space Left in Container !");
}

void Span :: addNumber(int Number)
{
    if (this->_N == this->_vec.size())
        throw Span::NoSpaceLeft();
    this->_vec.push_back(Number);
}

int Span :: longestSpan()
{
    if (this->_vec.size() <= 1)
        throw Span:: NoSpan();
    return(*std :: max_element(this->_vec.begin(), this->_vec.end()) - 
    *std :: min_element(this->_vec.begin(), this->_vec.end()));
}

int Span :: shortSpan()
{
    if (this->_vec.size() <= 1)
        throw Span :: NoSpan();
    std :: vector <int> sorted = this->_vec;
    std :: sort(sorted.begin(), sorted.end());
    int ret = sorted[1] - sorted[0];
    for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		if (ret > sorted[i + 1] - sorted[i])
			ret = sorted[i + 1] - sorted[i];
	}
	return (ret);
}
