/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 01:52:18 by soooh             #+#    #+#             */
/*   Updated: 2022/02/04 21:35:03 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : Hitpoints(10), Energypoints(10), Attackdamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) :  Name(Name), Hitpoints(10), Energypoints(10), Attackdamage(0)
{
	std::cout << "ClapTrap Default Constructor called | Name = [" << Name << "]" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->Name << " disappeard" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	Name = Name + "_copy";
	std::cout << "ClapTrap Copy Constructor called | Name = [" << Name << "]" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Assignation operator called\n";
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << RED;
	std::cout << "ClapTrap [" << this->Name << "] attacks [" << target
	<< "], causing [" << this->Attackdamage << "] points of damage!" << std::endl;
	std::cout << RESET;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap [" << this->Name << "] Currently, Hitpoints is [" << Hitpoints << "]" << std::endl;
	
	std::cout << GREEN;
	if (Hitpoints > 0)
	{
		Hitpoints -= amount;
		if (Hitpoints < 0)
			Hitpoints = 0;
		std::cout << "ClapTrap [" << this->Name << "] take Damages [" << amount << "]" << std::endl;
		std::cout << "ClapTrap [" << this->Name << "] Hitpoints is [" << Hitpoints << "]" << std::endl;
		if (Hitpoints == 0)
			std::cout << "ClapTrap [" << this->Name << "] is destroyed" << std::endl;
	}
	else
		std::cout << "ClapTrap [" << this->Name << "] destroyed already.. :(" << std::endl;
	
	std::cout << RESET;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << CYAN;
	if (!Hitpoints)
	{
		std::cout << "ClapTrap [" << this->Name << "] destroyed already.. :(" << std::endl;
	}
	else
	{
		Hitpoints += amount;
		std::cout << "ClapTrap [" << this->Name << "] is repaired [" << amount << "]" << std::endl;
		std::cout << "ClapTrap [" << this->Name << "] Hitpoints is [" << Hitpoints << "]" << std::endl;
	}
	std::cout << RESET;
}


ClapTrap::ClapTrap(std::string &Name, int Hitpoints, int Energypoints, int Attackdamage)
	: Name(Name), Hitpoints(Hitpoints), Energypoints(Energypoints), Attackdamage(Attackdamage)
{
	std::cout << "ClapTrap Default Constructor called | Name = [" << Name << "]" << std::endl;
}

ClapTrap::ClapTrap(int Hitpoints, int Energypoints, int Attackdamage)
	: Hitpoints(Hitpoints), Energypoints(Energypoints), Attackdamage(Attackdamage)
{	
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}