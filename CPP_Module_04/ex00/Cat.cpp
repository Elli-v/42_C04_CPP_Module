/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:44:57 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 16:08:13 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << YELLOW;
	std::cout << "Cat Default Constructor called" << std::endl;
	std::cout << RESET;
}

Cat::~Cat()
{
	std::cout << YELLOW;
	std::cout << "Cat Destructor called ["  << this->type << "]" << std::endl;
	std::cout << RESET;
}

Cat::Cat(const Cat &other):Animal(other)
{
	std::cout << YELLOW;
	std::cout << "Cat Copy Constructor = [" << type << "] called" << std::endl;
	std::cout << RESET;
}

Cat &Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	return (*this);
}

Cat::Cat(std::string& type):Animal(type)
{
	std::cout << YELLOW;
	std::cout << "Cat Constructor with type = [" << type << "] called" << std::endl;
	std::cout << RESET;
}

void Cat::makeSound() const
{
	std::cout << YELLOW;
	std::cout << "Mew Mew" << std::endl;
	std::cout << RESET;
}

void Cat::setType(std::string type)
{
	this->type = type;
}