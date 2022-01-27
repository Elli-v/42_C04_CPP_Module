/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 03:34:26 by soooh             #+#    #+#             */
/*   Updated: 2022/01/28 03:35:19 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base
{
	private:
	public:
		Base();
		virtual ~Base();
		Base(const Base &other); //복사생성자
		Base& operator=(const Base &other); //할당생성자오버로딩
};

#endif