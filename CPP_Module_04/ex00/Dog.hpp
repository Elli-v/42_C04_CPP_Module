/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:16:30 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 21:07:42 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &other); //복사생성자
		Dog& operator=(const Dog &other); //할당생성자오버로딩
		Dog(std::string& type);
		virtual void makeSound() const;
		void setType(std::string type);
};

#endif
