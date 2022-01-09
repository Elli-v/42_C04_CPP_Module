/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:05:46 by soooh             #+#    #+#             */
/*   Updated: 2022/01/09 19:22:49 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*numzom = new Zombie[N];
	std::stringstream	ss;

	for (int i = 0; i < N; i++)
	{
		ss << i;
		numzom[i].setName(name + ss.str());
		numzom[i].announce();
		ss.str("");
	}
	return (numzom);
}