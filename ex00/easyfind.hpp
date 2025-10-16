/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:25:42 by esraa             #+#    #+#             */
/*   Updated: 2025/10/16 15:21:17 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

template<typename T >
void easyfind ( const T &vec, int target)
{
	typename T::const_iterator found = std::find(vec.begin(), vec.end(), target);
	if (found != vec.end())
		std::cout << target << " found in array " << "\n";
		
	else 
	{
		std::cout << target << " ";
        throw std::runtime_error("not found in array");	
	}
}
#endif