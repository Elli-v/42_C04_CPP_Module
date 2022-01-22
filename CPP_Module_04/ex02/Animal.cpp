/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:26:34 by soooh             #+#    #+#             */
/*   Updated: 2022/01/23 00:58:31 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Hello~ " << this->type << std::endl;
}

Animal::~Animal()
{
	std::cout << "ByeBye~ " << this->type << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Hello~ " << this->type << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

// void Animal::makeSound() const
// {
// 	std::cout << "Animal~" << this->type << std::endl;
// }

std::string Animal::getType(void) const
{
	return (this->type);
}