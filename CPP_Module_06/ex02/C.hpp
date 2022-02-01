/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:47:29 by soooh             #+#    #+#             */
/*   Updated: 2022/01/29 01:35:43 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class	C:public Base
{
	private:
	public:
		C() {};
		~C() {};
		C(const C &other) { *this = other; };
		C &operator=(C const &other)
		{
			if (this != &other)
				Base::operator=(other);
			return *this;
		};
};

#endif