/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:45:10 by soooh             #+#    #+#             */
/*   Updated: 2022/01/20 01:33:27 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
}

DiamondTrap::DiamondTrap(std::string Name) 
	: ClapTrap(Name + "_clap_name"), ScavTrap(Name + "_clap_name"), FragTrap(Name + "_clap_name")
{
	this->Name = Name;
	this->Hitpoints = FragTrap::Hitpoints;
	this->Energypoints = ScavTrap::Energypoints;
	this->Attackdamage = FragTrap::Attackdamage;
	std::cout << "DiamondTrap " << this->Name << " appeard" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->Name << " disappeard" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	
	return (*this);
}

void	DiamondTrap::attack(const std::string &target) 
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << YELLOW;
	std::cout << "DiamondTrap name is " << this->Name <<
	" clapTrap name is " << this->ClapTrap::Name << std::endl;
	std::cout << RESET;
}