/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:45:26 by soooh             #+#    #+#             */
/*   Updated: 2022/02/06 02:04:09 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	std::cout << "[  Bureaucrat START !  ]" << std::endl;
	std::cout << std::endl;
	Bureaucrat test0("soooh0", 151);
	Bureaucrat test1("soooh1", 31);
	Bureaucrat test2("soooh2", 0);
	Bureaucrat test3("soooh3", 150);
	Bureaucrat test4("soooh4", 1);
	Bureaucrat test5("soooh5", 149);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout  << "[        test5        ]" << std::endl;
	std::cout << std::endl;
	std::cout << test5 << std::endl;
	test5.increGrade();
	std::cout << test5 << std::endl;
	test5.decreGrade();
	test5.decreGrade();
	test5.decreGrade();
	std::cout << test5 << std::endl;
	test5.increGrade();
	std::cout << test5 << std::endl;
	
	std::cout << std::endl;
	std::cout << "[   Bureaucrat BYE !   ]" << std::endl;
	std::cout << std::endl;
}