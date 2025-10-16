/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:56:29 by esraa             #+#    #+#             */
/*   Updated: 2025/10/12 23:28:03 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>

class Span
{
	private:
		unsigned int max_size;
		std::vector<int> vec;
		
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span& cpy);
		Span& operator = (const Span& cpy);
		void addNumber(int num);
		class ArrayIsFull : public std::exception
		{
			virtual const char *what() const throw();
		};
		int shortestSpan();
		int longestSpan();
		void addNumbers(std::vector<int>::const_iterator begin,
                std::vector<int>::const_iterator end);
};

#endif