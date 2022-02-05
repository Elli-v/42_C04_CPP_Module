/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:48:24 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 16:08:04 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << GREEN;
	std::cout << "WrongCat Default Constructor called" << std::endl;
	std::cout << RESET;
}

WrongCat::~WrongCat()
{
	std::cout << GREEN;
	std::cout << "WrongCat Destructor called ["  << this->type << "]" << std::endl;
	std::cout << RESET;
}

WrongCat::WrongCat(const WrongCat &other):WrongAnimal(other)
{
	std::cout << GREEN;
	std::cout << "WrongCat Copy Constructor = [" << type << "] called" << std::endl;
	std::cout << RESET;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	WrongAnimal::operator=(other);
	return (*this);
}

WrongCat::WrongCat(std::string& type):WrongAnimal(type)
{
	std::cout << GREEN;
	std::cout << "WrongCat Constructor with type = [" << type << "] called" << std::endl;
	std::cout << RESET;
}

void WrongCat::makeSound() const
{
	std::cout << GREEN;
	std::cout << "Mew Mew" << std::endl;
	std::cout << RESET;
}

void WrongCat::setType(std::string type)
{
	this->type = type;
}