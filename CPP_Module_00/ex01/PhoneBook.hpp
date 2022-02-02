/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:53:54 by soooh             #+#    #+#             */
/*   Updated: 2022/02/02 18:57:58 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

class Contact
{
	public:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		Contact() {};
};

class PhoneBook
{
	private:
		Contact Book[8];
		size_t	index;
		void	addContact(size_t index);
  		void	searchContact(size_t index);
  		void	searchDetail(size_t index);
	public:
		PhoneBook();
		~PhoneBook();
  		void	Add();
  		void	Search();
};

#endif