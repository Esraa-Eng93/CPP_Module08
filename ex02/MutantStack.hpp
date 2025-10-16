/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:23:18 by esraa             #+#    #+#             */
/*   Updated: 2025/10/16 17:42:38 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template< typename T >
class MutantStack : public std::stack<T>
{
	public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	// because i want iterator from stack type that use other container(adaptor contain based on other containr like list, deque) 
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack& other) : std::stack<T>(other) {}
	MutantStack& operator =(const MutantStack& other)
	{
		if(this != &other)
            std::stack<T>::operator=(other);
		return (*this);
	}
	~MutantStack() {}

	iterator begin()
	{
		return  (this->c.begin()); // it protected type in stack (Container c) it determined the container type that use
		// and we can use protected becuse this class is inherted 
	}
	
	iterator end()
	{
		return  (this->c.end());
	}
	
	reverse_iterator rbegin()
	{
		return  (this->c.rbegin());
	}
	
	reverse_iterator rend()
	{
		return  (this->c.rend());
	}
			
};