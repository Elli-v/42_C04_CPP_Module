/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:18:00 by soooh             #+#    #+#             */
/*   Updated: 2022/02/04 21:32:14 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(100, 50, 20) 
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) :  ClapTrap(Name, 100, 50, 20)
{
	std::cout << "ScavTrap Default Constructor called | Name = [" << Name << "]" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->Name << " disappeard" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	Name = Name + "_copy";
	std::cout << "ScavTrap Default Constructor called | Name = [" << Name << "]" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	if (Hitpoints == 0)
	{
		std::cout << "ScavTrap [" << Name << "] can't attack, because it's already destroy" << std::endl;
	}
	std::cout << RED;
	std::cout << "ScavTrap [" << Name << "] attacks [" << target
	<< "], causing [" << Attackdamage << "] points of damage!" << std::endl;
	std::cout << RESET;
}

void ScavTrap::guardGate(void)
{
	std::cout << YELLOW;
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
	std::cout << RESET;
}