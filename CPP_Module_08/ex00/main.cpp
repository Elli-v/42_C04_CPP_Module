/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:51:26 by soooh             #+#    #+#             */
/*   Updated: 2022/01/30 18:15:20 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	//시퀀스 컨테이너
	std::vector<int> vector;
	std::deque<int> deque;
	std::list<int> list;

	vector.push_back(1);
	vector.push_back(9);
	vector.push_back(13);

	deque.push_back(1);
	deque.push_back(9);
	deque.push_back(13);

	list.push_back(1);
	list.push_back(9);
	list.push_back(13);

	try
	{
		std::cout << ">> easyfind - vector <<" << std::endl;
		std::cout << *easyfind(vector, 1) << std::endl;
		std::cout << *easyfind(vector, 9) << std::endl;
		std::cout << *easyfind(vector, 15) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << ">> easyfind - deque <<" << std::endl;
		std::cout << *easyfind(deque, 1) << std::endl;
		std::cout << *easyfind(deque, 9) << std::endl;
		std::cout << *easyfind(deque, 15) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << ">> easyfind - list <<" << std::endl;
		std::cout << *easyfind(list, 1) << std::endl;
		std::cout << *easyfind(list, 9) << std::endl;
		std::cout << *easyfind(list, 15) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;
}