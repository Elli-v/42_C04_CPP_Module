/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 01:27:51 by soooh             #+#    #+#             */
/*   Updated: 2022/01/01 02:08:37 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main(void)
{
	std::string	cmd;
	Contact contact;

	std::cout << "📞 Hello~ This is soooh Phonebook" << std::endl;
	std::cout << "Save Contact   : ADD"<< std::endl;
	std::cout << "Search Contact : SEARCH"<< std::endl;
	std::cout << "Contact End    : EXIT"<< std::endl;
	while (true)
	{
		std::cout << "COMMAND        : ";
		std::cin >> cmd;
		if (cmd == "ADD")
			contact.Add();
		else if (cmd == "SEARCH")
			contact.Search();
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