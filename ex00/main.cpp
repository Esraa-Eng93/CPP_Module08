/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:35:37 by esraa             #+#    #+#             */
/*   Updated: 2025/10/16 15:18:33 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(50);
	v.push_back(1);
	v.push_back(2);
	v.push_back(8);
	v.push_back(20);
	v.push_back(9);
	v.push_back(15);
	v.push_back(7);
	std::cout << "------------------Test ONE------------------" << std::endl;
	try {
		easyfind(v, 9);
		std::cout << "------------------Test TWO------------------" << std::endl;
		easyfind(v, 100);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}