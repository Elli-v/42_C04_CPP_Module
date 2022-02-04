/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:05:25 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 02:03:18 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &other); //복사생성자
		ScavTrap &operator=(const ScavTrap &other); //할당생성자오버로딩
		
		void	attack(std::string const & target);
		void	guardGate();
};
#endif