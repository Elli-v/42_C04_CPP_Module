/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:53:05 by soooh             #+#    #+#             */
/*   Updated: 2022/01/29 01:55:20 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
template <typename T>
void swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T& min(T& a, T& b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T& max(T& a, T& b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif