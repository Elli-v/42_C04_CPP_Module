/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 00:14:21 by soooh             #+#    #+#             */
/*   Updated: 2022/01/12 00:48:22 by soooh            ###   ########.fr       */
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
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for(int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*funcs[i])();
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