/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:31:46 by soooh             #+#    #+#             */
/*   Updated: 2022/01/22 02:03:17 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::~Dog()
{
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "BoW! WoW!" << std::endl;
}

void Dog::setType(std::string type)
{
	this->type = type;
}