/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:18:00 by soooh             #+#    #+#             */
/*   Updated: 2022/01/19 22:44:18 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
}

ScavTrap::ScavTrap(std::string Name)
{
	this->Name = Name;
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	std::cout << "ScavTrap " << this->Name << " appeard" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->Name << " disappeard" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << RED;
	std::cout << "ScavTrap ";
	std::cout << RESET;
	this->ClapTrap::attack(target);
}

void ScavTrap::guardGate(void)
{
	std::cout << YELLOW;
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
	std::cout << RESET;
}