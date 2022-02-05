/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:45:10 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 14:42:28 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default Constructor called\n";
	this->Hitpoints = FragTrap::Hitpoints;
	this->Energypoints = ScavTrap::Energypoints;
	this->Attackdamage = FragTrap::Attackdamage;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name), ScavTrap(Name), FragTrap(Name)
{
	std::cout << "DiamondTrap Default Constructor called | Name = [" << Name << "]" << std::endl;
	this->Name = Name;
	this->Hitpoints = FragTrap::Hitpoints;
	this->Energypoints = ScavTrap::Energypoints;
	this->Attackdamage = FragTrap::Attackdamage;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap [" << this->Name << "] disappeard" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	this->Name = other.Name + "_copy";
	
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