/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:47:11 by soooh             #+#    #+#             */
/*   Updated: 2022/01/29 01:35:33 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class	A:public Base
{
	private:
	public:
		A() {};
		~A() {};
		A(const A &other) { *this = other; };
		A &operator=(A const &other)
		{
			if (this != &other)
				Base::operator=(other);
			return *this;
		};
};

#endif