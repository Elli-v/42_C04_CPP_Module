/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:47:35 by soooh             #+#    #+#             */
/*   Updated: 2022/01/09 19:34:33 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>
# include <sstream>

class Zombie
{
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie();
		void announce(void);
		void setName(std::string name);
	private:
		std::string name;
};
Zombie* zombieHorde( int N, std::string name );
#endif