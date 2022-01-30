/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 01:53:23 by soooh             #+#    #+#             */
/*   Updated: 2022/01/31 02:27:01 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iterator>
# include <vector>

class Span 
{
	unsigned int		size;
	std::vector<int>	vec;
	
	private:
	public:
		Span();
		Span(unsigned int num);
		~Span();
		Span(const Span &other); //복사생성자
		Span& operator=(const Span &other); //할당생성자오버로딩
		
		void addNumber(unsigned int num);//int 추가
		void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);//컨테이너 추가
		
		int shortestSpan(void);//최소값 찾기
		int longestSpan(void);//최대값 찾기
};

#endif