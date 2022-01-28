/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 03:34:26 by soooh             #+#    #+#             */
/*   Updated: 2022/01/29 01:41:34 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base
{
	private:
	public:
		Base(){};
		Base(Base const &other) { *this = other; };
		Base &operator=(Base const &other)
		{
			if (this != &other) {}
			return *this;
		};
		virtual ~Base(){};
};

#endif