/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:46:58 by soooh             #+#    #+#             */
/*   Updated: 2022/01/29 01:35:40 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class	B:public Base
{
	private:
	public:
		B() {};
		~B() {};
		B(const B &other) { *this = other; };
		B &operator=(B const &other)
		{
			if (this != &other)
				Base::operator=(other);
			return *this;
		};
};

#endif