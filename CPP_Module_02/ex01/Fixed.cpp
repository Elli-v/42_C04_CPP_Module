/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:53:29 by soooh             #+#    #+#             */
/*   Updated: 2022/01/16 00:32:52 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::Fixed(float src)
{
	std::cout<< "Float constructor called" << std::endl;
	this->value = (int)roundf(src * (1 << fractional_bits));
}

Fixed::Fixed(int src)
{
	std::cout<< "Int constructor called" << std::endl;
	this->value = src << fractional_bits;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout<< "Assignation operator called" << std::endl;
	this->value = src.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &ref)
{
	out << ref.toFloat();
	return out;
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

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (1 << 8));
}

int Fixed::toInt( void ) const
{
	return (this->value >> 8);
}