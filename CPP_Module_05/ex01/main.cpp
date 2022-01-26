/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:45:26 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 03:13:49 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	std::cout << "[    Form START !    ]" << std::endl;
	std::cout << std::endl;
	Form Form0("soooh0", 100, 70);
	Form Form1("soooh1", 70, 20);
	Bureaucrat Bureaucrat0("soooh2", 80);

	std::cout << std::endl;
	std::cout << Form0 << std::endl;
	std::cout << Form1 << std::endl;
	std::cout << Bureaucrat0 << std::endl;

	std::cout << "[ signForm Form0 ! ]" << std::endl;
	std::cout << std::endl;
	Bureaucrat0.signForm(Form0);
	try
	{
		Form0.beSigned(Bureaucrat0);
		std::cout << std::endl;
		std::cout << Form0 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
		std::cout << Form0 << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[ signForm Form1 ! ]" << std::endl;
	std::cout << std::endl;
	Bureaucrat0.signForm(Form1);
	try
	{
		Form1.beSigned(Bureaucrat0);
		std::cout << std::endl;
		std::cout << Form1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
		std::cout << Form1 << std::endl;
	}
	std::cout << std::endl;
}