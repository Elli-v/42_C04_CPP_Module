/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:22:57 by soooh             #+#    #+#             */
/*   Updated: 2022/01/30 18:00:12 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>
# include <exception>

template <typename T>
typename T::iterator easyfind(T &con, int value)
{
	typename T::iterator ret;

	ret = std::find(con.begin(), con.end(), value);
	if (ret == con.end())
	{
		std::cout << "Error: No value found" << std::endl;
		throw std::exception();
	}

	return (ret);
};

#endif