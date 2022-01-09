/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:59:39 by soooh             #+#    #+#             */
/*   Updated: 2022/01/09 17:40:24 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
}
Zombie::Zombie( std::string name )
{
	this->name = name;
	announce();
}
void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << name << " Grrrrrr...rr.r...r...." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}