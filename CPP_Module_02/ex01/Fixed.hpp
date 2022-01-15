/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:35:21 by soooh             #+#    #+#             */
/*   Updated: 2022/01/15 19:28:40 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	fractional_bits= 8;
	public:
		Fixed( void );
		~Fixed( void );
		Fixed(const Fixed& src); //복사생성자
		Fixed(const float src);
		Fixed(const int src);
		Fixed &operator=(const Fixed &src); //할당생성자오버로딩
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &src);

# endif