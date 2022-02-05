/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:47:24 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 23:36:23 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("-")
{
	std::cout << CYAN;
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
	std::cout << RESET;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN;
	std::cout << "WrongAnimal Destructor called ["  << this->type << "]" << std::endl;
	std::cout << RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << CYAN;
	*this = other;
	type = type + "_copy";
	std::cout << "WrongAnimal Copy Constructor [" << type << "] called" << std::endl;
	std::cout << RESET;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << CYAN;
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	this->type = other.type;
	std::cout << RESET;
	return (*this);
}

WrongAnimal::WrongAnimal(const std::string& type):type(type)
{
	std::cout << CYAN;
	std::cout << "WrongAnimal Constructor with type [" << type << "] called" << std::endl;
	std::cout << RESET;
}

void WrongAnimal::makeSound() const
{
	std::cout << CYAN;
	std::cout << "?? ?? WrongAnimal cannot make sound [" << type << "]" << std::endl;
	std::cout << RESET;
}

std::string WrongAnimal::getType(void) const
{
	std::cout << CYAN;
	std::cout << "WrongAnimal getType function = [" << type << "] called" << std::endl;
	std::cout << RESET;
	return (this->type);
}