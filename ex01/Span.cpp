/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 22:18:36 by esraa             #+#    #+#             */
/*   Updated: 2025/10/12 23:41:12 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}
Span::Span(unsigned int n) : max_size(n)
{
	vec.reserve(n);//to keep size and and change the capcity of array
	//if i use resize() it actually reseve allocation wit value of 0
}
Span::~Span(){}
Span::Span(const Span& cpy)
{
	*this = cpy;
}
Span& Span::operator = (const Span& cpy)
{
	if (this == &cpy)
		return (*this);
	this->max_size = cpy.max_size;
	this->vec = cpy.vec;
	return (*this);
}
void Span::addNumber(int num)
{
    if (vec.size() >= max_size)
        throw ArrayIsFull();
    vec.push_back(num);  // append at the end
}

const char * ::Span::ArrayIsFull::what() const throw()
{
	return " Array is full \n";
}
int	Span::shortestSpan()
{
	if (vec.size() < 2)
    throw std::runtime_error("Not enough elements to find a span");
	
	std::sort(vec.begin(), vec.end());
	int	minSpan = std::numeric_limits<int>::max();
	size_t	i = 1;
	while (i < vec.size())
	{
		int shortestSpan = vec[i] - vec[i - 1];
		if (shortestSpan < minSpan)
			minSpan = shortestSpan;
		i++;
	}
	return (minSpan);
}
int Span::longestSpan()
{	
	if (vec.size() < 2)
    throw std::runtime_error("Not enough elements to find a span");

	std::sort(vec.begin(), vec.end());
	int longestSpan = vec.back() - vec.front();
	return (longestSpan);
	
}
void Span::addNumbers(std::vector<int>::const_iterator begin,
                std::vector<int>::const_iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		++begin;
	}
}