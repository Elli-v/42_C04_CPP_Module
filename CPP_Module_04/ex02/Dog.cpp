/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:31:46 by soooh             #+#    #+#             */
/*   Updated: 2022/01/23 00:44:01 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete (this->brain);
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
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

Brain *Dog::getBrain() const
{
	return this->brain;
}