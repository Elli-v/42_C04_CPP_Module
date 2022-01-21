/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:48:24 by soooh             #+#    #+#             */
/*   Updated: 2022/01/22 02:03:41 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Mew Bow" << std::endl;
}

void WrongCat::setType(std::string type)
{
	this->type = type;
}