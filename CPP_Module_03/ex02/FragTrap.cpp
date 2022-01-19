/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:48:17 by soooh             #+#    #+#             */
/*   Updated: 2022/01/19 23:07:36 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
}

FragTrap::FragTrap(std::string Name)
{
	this->Name = Name;
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
	std::cout << "FragTrap " << this->Name << " appeard" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->Name << " disappeard" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energypoints = other.Energypoints;
	this->Attackdamage = other.Attackdamage;
	
	return (*this);
}

void	FragTrap::attack(std::string const & target)
{
	this->ClapTrap::attack(target);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW;
	std::cout << "FragTrap give me a high fives." << std::endl;
	std::cout << RESET;
}