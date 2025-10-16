/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:23:23 by esraa             #+#    #+#             */
/*   Updated: 2025/10/16 17:50:47 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "..........first test..........." << std::endl;
	std::cout << "..........MutantStack..........." << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout <<"using reverse_iterator \n";
	for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
       {
	   std::cout<< *rit << std::endl;}
    std::cout << "\n";
	std::stack<int> s(mstack);
	std::cout << "..........second test..........." << std::endl;
	std::cout << "..............list.............." << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
//[...]
	list.push_back(0);
	std::list<int>::iterator it1 = list.begin();
	std::list<int>::iterator ite1 = list.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::cout <<"using reverse_iterator \n";
	for (std::list<int>::reverse_iterator rit = list.rbegin(); rit != list.rend(); ++rit)
       {
		std::cout<< *rit << std::endl;}
	return (0);
}