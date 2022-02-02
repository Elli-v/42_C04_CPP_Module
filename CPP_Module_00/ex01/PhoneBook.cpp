/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 01:27:51 by soooh             #+#    #+#             */
/*   Updated: 2022/02/02 18:48:03 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { index = 0; }
PhoneBook::~PhoneBook() { std::cout << "Bye Bye ~ 🌸" << std::endl; }

void	PhoneBook::addContact(size_t index)
{
	Contact& contact = Book[index];

	std::cout << "first name : ";
	std::cin >> contact._first_name;
	std::cout << "last name : ";
	std::cin >> contact._last_name;
	std::cout << "nickname : ";
	std::cin >> contact._nickname;
	std::cout << "phone number : ";
	std::cin >> contact._phone_number;
	std::cout << "darkest secret : ";
	std::cin >> contact._darkest_secret;
}

void	PhoneBook::Add(void)
{
  if (index == 8)
  {
	for(size_t i = 1; i < index; i++)
		Book[i - 1] = Book[i];
	index--;
  }
  addContact(index++);
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

void	PhoneBook::searchContact(size_t index)
{
	Contact& contact = Book[index];

	std::cout << "|";
	std::cout << std::setw(10) << index + 1 << "|";
	std::cout << std::setw(10) << LengthCheck(contact._first_name) << "|";
	std::cout << std::setw(10) << LengthCheck(contact._last_name) << "|";
	std::cout << std::setw(10) << LengthCheck(contact._nickname) << "|" << std::endl;
}

void	PhoneBook::searchDetail(size_t index)
{
	Contact& contact = Book[index];

	std::cout << "Fist name      : " << contact._first_name << std::endl;
	std::cout << "Last name      : " << contact._last_name << std::endl;
	std::cout << "Nickname       : " << contact._nickname << std::endl;
	std::cout << "PhoneNumber    : " << contact._phone_number << std::endl;
	std::cout << "Darkest Secret : " << contact._darkest_secret << std::endl;
}

void	PhoneBook::Search(void)
{
	size_t num;

	std::cout << "|";
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	
	for (size_t i = 0; i < index; i++)
		searchContact(i);
	std::cout << "Enter the index of the name : ";
	std::cin >> num;
	num--;
	if (index == 0)
		std::cout << "oh.. Phonebook is empty" << std::endl;
	else if (num <= index && num >= 0)
		searchDetail(num);
}