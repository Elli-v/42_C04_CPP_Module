/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:53:29 by soooh             #+#    #+#             */
/*   Updated: 2022/01/15 19:00:42 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::bit = 8;

Fixed::Fixed( void )
{
	this->value = 0;
	std::cout<< "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout<< "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout<< "Copy constructor called" << std::endl;
	this->value = src.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout<< "Assignation operator called" << std::endl;
	this->value = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout<< "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}
