/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 03:26:49 by soooh             #+#    #+#             */
/*   Updated: 2022/01/30 03:41:52 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
	unsigned int	len;
	T				*arr;

	public:
		Array() : len(0), arr(NULL) {};
		~Array() { delete []arr; }
		Array(unsigned int _len) : len(_len), arr(NULL)
		{
			if (_len > 0)
				arr = new T[_len];
			else if (_len <= 0)
				std::cout << "err: size must be bigger than 0" << std::endl;
		}
		Array(const Array& other)
		{
			len = other.len;
			arr = new T[len];
			for (unsigned int i = 0; i < len; i++)
				arr[i] = other.arr[i];
		}
		Array& operator=(const Array& other)
		{
			if (this == other)
				return *this ;
			delete []arr;
			len = other.len;
			arr = new T[len];
			for (unsigned int i = 0; i < len; i++)
				arr[i] = other.arr[i];
			return *this ;
		}
		 T& operator [] (unsigned int _len)
		{
			if (_len >= len)
				throw std::exception();
			return (arr[_len]);
		}
		unsigned int size() { return (len); }
};

#endif