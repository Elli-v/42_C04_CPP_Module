/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 02:05:23 by soooh             #+#    #+#             */
/*   Updated: 2022/02/07 17:35:12 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include <algorithm>
#include <exception>

Span::Span(): size(0) {}
Span::Span(unsigned int num): size(num) {}
Span::~Span() {}
Span::Span(const Span &other) { *this = other; }
Span& Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	vec = other.vec;
	size = other.size;
	return (*this);
}

void Span::addNumber(unsigned int num)
{
	if (vec.size() == size)
		throw( std::length_error("This container is Full\n"));
	vec.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) > static_cast<int>(size)) //iterator 사이의 크기를 반환한다
		throw( std::length_error("Don't have enough space\n"));
	vec.insert(vec.end(), start, end);
	
}

int Span::shortestSpan(void)
{
	if (vec.size() < 2)
		throw( std::length_error("shortestSpan: Not enough Numbers\n"));
	std::vector<int>::iterator start = vec.begin();
	int ret = INT_MAX;
	while (start < vec.end())
	{
		int span = *start - *(start + 1);
		if (span < 0)
			span *= -1;
		if (ret > span)
			ret = span;
		start++;
	}
	return (ret);
}

int Span::longestSpan(void)
{
	if (vec.size() < 2)
		throw( std::length_error("longestSpan: Not enough Numbers\n"));
	std::vector<int>::iterator start = vec.begin();
	int ret = 0;
	while (start++ < vec.end())
	{
		int span = *start - *(start + 1);
		if (span < 0)
			span *= -1;
		if (ret < span)
			ret = span;
	}
	return (ret);
}
		