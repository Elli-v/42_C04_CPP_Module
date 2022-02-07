/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:53:05 by soooh             #+#    #+#             */
/*   Updated: 2022/02/07 01:44:55 by soooh            ###   ########.fr       */
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

class	AnyClass
{
private:
	int		num;
public:
	AnyClass():num(0) {}
	AnyClass( int n ):num(n) {}
	int		getNum() const { return num ; }
	bool	operator>(const AnyClass& otherObj) const { return num > otherObj.num ; }
	bool	operator<(const AnyClass& otherObj) const { return num < otherObj.num ; }
	bool	operator>=(const AnyClass& otherObj) const { return num >= otherObj.num ; }
	bool	operator<=(const AnyClass& otherObj) const { return num <= otherObj.num ; }
	bool	operator==(const AnyClass& otherObj) const { return num == otherObj.num ; }
	bool	operator!=(const AnyClass& otherObj) const { return num != otherObj.num ; }
};

std::ostream&	operator<<(std::ostream& out, const AnyClass& obj)
{
	out << obj.getNum();
	return out ;
}

#endif