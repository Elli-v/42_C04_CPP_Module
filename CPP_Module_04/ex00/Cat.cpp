/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:44:57 by soooh             #+#    #+#             */
/*   Updated: 2022/01/22 02:03:12 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
}

Cat::~Cat()
{
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Mew Mew" << std::endl;
}

void Cat::setType(std::string type)
{
	this->type = type;
}