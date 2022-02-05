/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:31:46 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 23:01:36 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << RED;
	std::cout << "🐶 [ " << type << " ] Default Constructor called" << std::endl;
	brain = new Brain();
	std::cout << RESET;
}

Dog::~Dog()
{
	std::cout << RED;
	std::cout << "🐶 [ " << type << " ] Destructor called" << std::endl;
	delete brain;
	std::cout << RESET;
}

Dog::Dog(const Dog &other):Animal(other)
{
	std::cout << RED;
	std::cout << "🐩 [ " << type << " ] Copy Constructor called" << std::endl;
	brain = new Brain();
	*this = other;
	std::cout << RESET;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << RED;
	std::cout << "🦮 [ " << type << " ] Assignation operator called" << std::endl;
	*brain = *(other.brain);
	std::cout << RESET;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << RED;
	std::cout << "🐶 [ " << type << " ] Mew Mew" << std::endl;
	std::cout << RESET;
}

Brain*	Dog::getBrain()
{
	return brain;
}

std::string	Dog::getBrainIdea(unsigned int index)
{
	return brain->getIdea(index);
}

int	Dog::addBrainIdea(std::string idea)
{
	return brain->addIdea(idea);
}