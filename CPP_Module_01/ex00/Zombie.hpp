/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:47:35 by soooh             #+#    #+#             */
/*   Updated: 2022/01/08 14:59:25 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie();
		void announce(void);
	private:
		std::string name;
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif