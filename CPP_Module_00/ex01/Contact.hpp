/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 01:14:52 by soooh             #+#    #+#             */
/*   Updated: 2021/12/31 01:30:00 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip> //출력 형식 조작
# include <string>

class Contact
{
	private:
		struct contact_data
		{
			std::string	first_name;
			std::string	last_name;
			std::string	nickname;
			std::string	phone_number;
			std::string	darkest_secret;
		};
		struct contact_data data[8];
		int index;
	public:
		Contact();
		void Add();
		void Search();
		void Exit();
};

#endif