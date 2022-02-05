/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:31:46 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 16:08:10 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << RED;
	std::cout << "Dog Default Constructor called" << std::endl;
	std::cout << RESET;
}

Dog::~Dog()
{
	std::cout << RED;
	std::cout << "Dog Destructor called ["  << this->type << "]" << std::endl;
	std::cout << RESET;
}

Dog::Dog(const Dog &other):Animal(other)
{
	std::cout << RED;
	std::cout << "Dog Copy Constructor = [" << type << "] called" << std::endl;
	std::cout << RESET;
}

Dog &Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	return (*this);
}

Dog::Dog(std::string& type):Animal(type)
{
	std::cout << RED;
	std::cout << "Dog Constructor with type = [" << type << "] called" << std::endl;
	std::cout << RESET;
}

void Dog::makeSound() const
{
	std::cout << RED;
	std::cout << "Bow Wow!!" << std::endl;
	std::cout << RESET;
}

void Dog::setType(std::string type)
{
	this->type = type;
}