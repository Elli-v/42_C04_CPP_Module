/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:44:57 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 23:02:05 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << YELLOW;
	std::cout << "🐱 [ " << type << " ] Default Constructor called" << std::endl;
	brain = new Brain();
	std::cout << RESET;
}

Cat::~Cat()
{
	std::cout << YELLOW;
	std::cout << "🐱 [ " << type << " ] Destructor called" << std::endl;
	std::cout << RESET;
	delete brain;
}

Cat::Cat(const Cat &other):Animal(other)
{
	std::cout << YELLOW;
	std::cout << "🐈 [ " << type << " ] Copy Constructor called" << std::endl;
	brain = new Brain();
	*this = other;
	std::cout << RESET;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << YELLOW;
	std::cout << "🐯 [ " << type << " ] Assignation operator called" << std::endl;
	*brain = *(other.brain);
	std::cout << RESET;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << YELLOW;
	std::cout << "🐱 [ " << type << " ] Mew Mew" << std::endl;
	std::cout << RESET;
}

Brain*	Cat::getBrain()
{
	return brain;
}

std::string	Cat::getBrainIdea(unsigned int index)
{
	return brain->getIdea(index);
}

int	Cat::addBrainIdea(std::string idea)
{
	return brain->addIdea(idea);
}