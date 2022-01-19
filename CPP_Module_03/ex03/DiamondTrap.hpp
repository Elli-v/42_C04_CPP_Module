/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:42:20 by soooh             #+#    #+#             */
/*   Updated: 2022/01/20 01:21:04 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string Name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string Name);
		DiamondTrap(const DiamondTrap &other); //복사생성자
		DiamondTrap &operator=(const DiamondTrap &other); //할당생성자오버로딩
		
		void	attack(const std::string &target);
		void	whoAmI();
};
#endif