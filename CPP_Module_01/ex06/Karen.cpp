/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 00:14:21 by soooh             #+#    #+#             */
/*   Updated: 2022/02/04 01:36:10 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
}

Karen::~Karen( void )
{
}

void	Karen::complain( std::string level )
{
	void	(Karen::*funcs[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	int i = ("DEBUG" == level) * 1
		+ ("INFO" == level) * 2
		+ ("WARNING" == level) * 3
		+ ("ERROR" == level) * 4;

	switch (i)
	{
		case 0:
			std::cout << "[ NONE! ]" << std::endl <<
			"Probably complaining about insignificant problems." << std::endl;
			break;	
		case 1:
			(this->*funcs[0])();
			i++;
			std::cout << std::endl;
		case 2:
			(this->*funcs[1])();
			i++;
			std::cout << std::endl;
		case 3:
			(this->*funcs[2])();
			i++;
			std::cout << std::endl;
		case 4:
			(this->*funcs[3])();
			i++;
	}
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl <<
	"Karen complains about debug." << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl <<
	"Karen complains about info." << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl <<
	"Karen complains about warning." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl <<
	"Karen complains about error." << std::endl;
}