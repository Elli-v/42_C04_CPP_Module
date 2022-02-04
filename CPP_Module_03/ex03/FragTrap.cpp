/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:48:17 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 01:49:37 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(100, 100, 30)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name, 100, 100, 30)
{
	std::cout << "FragTrap Default Constructor called | Name = [" << Name << "]" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->Name << " disappeard" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other):ClapTrap(other)
{
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	
	return (*this);
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap [" << Name << "] attacks [" << target
	<< "], causing [" << Attackdamage << "] points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW;
	std::cout << "FragTrap give me a high fives." << std::endl;
	std::cout << RESET;
}