/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:26:34 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 16:38:41 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called ["  << this->type<< "]" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	type = type + "_copy";
	std::cout << "Animal Copy Constructor = [" << type << "] called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

Animal::Animal(const std::string& type):type(type)
{
	std::cout << "Animal Constructor with type = [" << type << "] called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "?? ?? What animal are you?" << this->type << std::endl;
}

std::string Animal::getType(void) const
{
	std::cout << "Animal getType function = [" << type << "] called" << std::endl;
	return (this->type);
}