/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:26:34 by soooh             #+#    #+#             */
/*   Updated: 2022/02/06 00:05:54 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal")
{
	std::cout << "Animal [ " << type << " ] Default Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal [ " << type << " ] Destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	type = type + "_copy";
	std::cout << "Animal [ " << type << " ] Copy Constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

Animal::Animal(const std::string& type):type(type)
{
	std::cout << "Animal [ " << type << " ] Constructor with type called" << std::endl;
}

std::string Animal::getType(void) const
{
	std::cout << "Animal [ " << type << " ] getType function called" << std::endl;
	return (this->type);
}

// void Animal::makeSound() const
// {
// 	std::cout << " [ " << type << " ] ?? ?? What animal are you?" << this->type << std::endl;
// }