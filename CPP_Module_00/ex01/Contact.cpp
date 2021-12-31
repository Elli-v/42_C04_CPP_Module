/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 01:26:45 by soooh             #+#    #+#             */
/*   Updated: 2022/01/01 02:27:37 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	index = 0;
}

void	Contact::Add()
{
	int	i;
	if (index == 8)
	{
		for(i = 1; i < index; i++)
			book[i - 1] = book[i];
		index--;
	}
	std::cout << "first name : ";
	std::cin >> book[index].first_name;
	std::cout << "last name : ";
	std::cin >> book[index].last_name;
	std::cout << "nickname : ";
	std::cin >> book[index].nickname;
	std::cout << "phone number : ";
	std::cin >> book[index].phone_number;
	std::cout << "darkest secret : ";
	std::cin >> book[index].darkest_secret;
	index++;
}

std::string	LengthCheck(std::string str)
{
	if (str.length() >= 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	return (str);
}

void	Contact::Search()
{
	int	i;

	i = 0;
	std::cout << "|";
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	for(i = 0; i < index; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << LengthCheck(book[i].first_name) << "|";
		std::cout << std::setw(10) << LengthCheck(book[i].last_name) << "|";
		std::cout << std::setw(10) << LengthCheck(book[i].nickname) << "|" << std::endl;;
	}
	std::cout << "Enter the index of the name : ";
	std::cin >> i;
	i--;
	if (index == 0)
		std::cout << "oh.. Phonebook is empty" << std::endl;
	else if (i < index && i > 0)
	{
		std::cout << "Fist name      : " << book[i].first_name << std::endl;
		std::cout << "Last name      : " << book[i].last_name << std::endl;
		std::cout << "Nickname       : " << book[i].nickname << std::endl;
		std::cout << "PhoneNumber    : " << book[i].phone_number << std::endl;
		std::cout << "Darkest Secret : " << book[i].darkest_secret << std::endl;
	}
}