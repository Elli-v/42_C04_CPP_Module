/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:27:34 by soooh             #+#    #+#             */
/*   Updated: 2022/02/02 18:52:37 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phone;
	std::string	cmd;

	std::cout << "📞 Hello~ This is soooh Phonebook" << std::endl;
	std::cout << "Save Contact   : ADD"<< std::endl;
	std::cout << "Search Contact : SEARCH"<< std::endl;
	std::cout << "Contact End    : EXIT"<< std::endl;

	while (true)
	{
		std::cout << "COMMAND        : ";
		std::cin >> cmd;
		if (cmd == "ADD")
			phone.Add();
		else if (cmd == "SEARCH")
			phone.Search();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "===== Wrong input =====" << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		if (std::cin.eof())
			return (0);
	}
}