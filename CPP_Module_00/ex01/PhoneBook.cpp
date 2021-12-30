/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 01:27:51 by soooh             #+#    #+#             */
/*   Updated: 2021/12/31 01:38:14 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main(void)
{
	std::string	cmd;
	Contact contact;

	while (1)
	{
		std::cout << "ADD or SEARCH or EXIT : ";
		std::cin >> cmd; //커맨드 입력
		if (cmd == "ADD")
			std::cout << "hi ADD\n";
		else if (cmd == "SEARCH")
			std::cout << "hi SEARCH\n";
		else if (cmd == "EXIT")
		{
			std::cout << "bye!\n";
			return (0);
		}
		else
			std::cout << "you can only use (ADD, SEARCH, EXIT)" << std::endl;
			
	}
}