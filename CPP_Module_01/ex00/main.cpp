/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:41:46 by soooh             #+#    #+#             */
/*   Updated: 2022/01/09 01:46:48 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const	std::string NAME[] =
{
	"zombie00",
	"zombie01",
	"zombie02",
	"zombie03",
	"zombie04",
	"zombie05"
};

int	main(void)
{
	Zombie stackZombie = Zombie("stackZombie");

	Zombie *heapZombie = newZombie("heapZombie");
	delete heapZombie;

	for (int i = 0; i < 6; i++)
	{
		randomChump(NAME[i]);
	}
}