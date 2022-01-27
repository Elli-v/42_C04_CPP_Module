/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:14:35 by soooh             #+#    #+#             */
/*   Updated: 2022/01/28 03:12:08 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <cctype>
# include <limits>

class Conversion
{
	private:
		char	*param;
	public:
		Conversion();
		~Conversion();
		Conversion(char *param);
		Conversion(const Conversion &other); //복사생성자
		Conversion& operator=(const Conversion &other); //할당생성자오버로딩

		void	to_char(char *param);
		void	to_int(char *param);
		void	to_float(char *param);
		void	to_double(char *param);
};

#endif