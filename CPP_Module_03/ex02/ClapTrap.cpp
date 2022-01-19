/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 01:52:18 by soooh             #+#    #+#             */
/*   Updated: 2022/01/19 23:07:31 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
}

ClapTrap::ClapTrap(std::string Name)
{
	this->Name = Name;
	this->Hitpoints = 10;
	this->Energypoints = 10;
	this->Attackdamage = 0;
	std::cout << "ClapTrap " << this->Name << " appeard" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->Name << " disappeard" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << RED;
	std::cout << "[" << this->Name << "] attacks [" << target
	<< "], causing [" << this->Attackdamage << "] points of damage!" << std::endl;
	std::cout << RESET;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << GREEN;
	this->Hitpoints -= amount;
	std::cout << "[" << this->Name << "] take Damages [" << amount << "]" << std::endl;
	std::cout << "[" << this->Name << "] Hitpoints is [" << this->Hitpoints << "]" << std::endl;
	std::cout << RESET;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << CYAN;
	this->Hitpoints += amount;
	std::cout << "[" << this->Name << "] is repaired [" << amount << "]" << std::endl;
	std::cout << "[" << this->Name << "] Hitpoints is [" << this->Hitpoints << "]" << std::endl;
	std::cout << RESET;
}
