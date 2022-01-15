/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:35:21 by soooh             #+#    #+#             */
/*   Updated: 2022/01/13 01:39:23 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int					value;
		const static int	bit;
	public:
		Fixed( void );
		~Fixed( void );
		Fixed(const Fixed& src); //복사생성자
		Fixed &operator=(const Fixed &src); //할당생성자오버로딩

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

# endif