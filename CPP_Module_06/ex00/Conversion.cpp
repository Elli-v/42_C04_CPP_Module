/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:14:26 by soooh             #+#    #+#             */
/*   Updated: 2022/01/28 03:12:23 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {}
Conversion::~Conversion() {}
Conversion::Conversion(const Conversion &other)
{
	param = other.param;
}
Conversion& Conversion::operator=(const Conversion &other)
{
	param = other.param;
	return (*this);
}

Conversion::Conversion(char *param): param(param)
{
	to_char(param);
	to_int(param);
	to_float(param);
	to_double(param);
}

void	Conversion::to_char(char *param)
{
	try
	{
		int n = std::stoi(param);

		if (isprint(n))
			std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	} catch (const std::exception& expn)
	{
		std::cout << "char: impossible" << std::endl;
	}
}
void	Conversion::to_int(char *param)
{
	try
	{
		int n = std::stoi(param);

		std::cout << "int: " << static_cast<int>(n) << std::endl;
	} catch (const std::exception& expn)
	{
		std::cout << "int: impossible" << std::endl;
	}
}
void	Conversion::to_float(char *param)
{
	
	try
	{
		float n = std::stof(param);
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "float: "  << static_cast<float>(n) << "f" << std::endl;
	} catch (const std::exception& expn)
	{
		std::cout << expn.what() << std::endl;
	}
}
void	Conversion::to_double(char *param)
{
	
	try
	{
		double n = std::stod(param);
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "double: "  << static_cast<double>(n) << std::endl;
	} catch (const std::exception& expn)
	{
		std::cout << expn.what() << std::endl;
	}
}