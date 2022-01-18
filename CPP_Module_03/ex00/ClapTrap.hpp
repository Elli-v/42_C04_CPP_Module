/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 01:36:54 by soooh             #+#    #+#             */
/*   Updated: 2022/01/19 02:24:49 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

# define CYAN "\e[36m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

class ClapTrap
{
	private:
		std::string Name;
		int	Hitpoints;
		int	Energypoints;
		int	Attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other); //복사생성자
		ClapTrap &operator=(const ClapTrap &other); //할당생성자오버로딩
		
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif