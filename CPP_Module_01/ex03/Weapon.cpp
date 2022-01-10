/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:27:18 by soooh             #+#    #+#             */
/*   Updated: 2022/01/10 20:11:13 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon(void)
{
}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

void Weapon::setType(std::string Newtype)
{
	this->type = Newtype;
}

const std::string &Weapon::getType(void)
{
	return (this->type);
}