/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:41:46 by soooh             #+#    #+#             */
/*   Updated: 2022/02/03 23:37:16 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const	std::string NAME[] =
{
	"zombie00",
	"zombie01",
	"zombie02",
	"zombie03"
};

int	main(void)
{
	Zombie stackZombie = Zombie("stackZombie");
	stackZombie.announce();
	Zombie *heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;

	for (int i = 0; i < 4; i++)
		randomChump(NAME[i]);
	return (0);
}