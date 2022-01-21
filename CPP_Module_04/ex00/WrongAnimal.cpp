/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:47:24 by soooh             #+#    #+#             */
/*   Updated: 2022/01/22 02:05:39 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "Hello~ " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "ByeBye~ " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "Hello~ " << this->type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal~" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}