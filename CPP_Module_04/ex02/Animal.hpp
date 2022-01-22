/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:13:33 by soooh             #+#    #+#             */
/*   Updated: 2022/01/23 00:53:52 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other); //복사생성자
		Animal &operator=(const Animal &other); //할당생성자오버로딩
		
		virtual void makeSound() const = 0; //순수가상함수(해당 함수를 정의하지 않겠다는 뜻)
		std::string getType(void) const;
};

#endif
