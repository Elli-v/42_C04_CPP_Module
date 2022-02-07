/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:41:26 by soooh             #+#    #+#             */
/*   Updated: 2022/02/07 01:58:04 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int length, void (*func)(const T&))
{
    for (int i = 0; i < length; i++)
        (*func)(array[i]);
}

template <typename T>
void printIter(T const &element)
{
    std::cout << element << std::endl;
}

class	AnyClass
{
private:
	int		num;
public:
	AnyClass():num(42) {return ;}
	AnyClass(int n):num(n) {}
	int		getNum() const { return num ; }
};

std::ostream& operator<<(std::ostream& out, const AnyClass& obj)
{
	out << obj.getNum();
	return out ;
}

#endif