/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:13:33 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 16:03:13 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other); //복사생성자
		Animal &operator=(const Animal &other); //할당생성자오버로딩
		
		Animal(const std::string& type);
		virtual void makeSound() const;
		std::string getType(void) const;
};

#endif
