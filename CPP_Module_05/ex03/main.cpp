/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:45:26 by soooh             #+#    #+#             */
/*   Updated: 2022/02/06 17:02:54 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void	InternMakeForm(std::string formName, std::string target)
{
	Intern	soooh;
	Form*	form;
	form = soooh.makeForm(formName, target);

	if (form)
	{
		std::cout << YELLOW;
		std::cout << "\nResult : SUCCESS\n\n";
		std::cout << *form;
		std::cout << RESET;
		std::cout << "\n[ Target ]\n\t";
		std::cout << (*(RobotomyRequestForm*)form).getTarget() << std::endl;
		delete form;
	}
	else
	{
		std::cout << RED;
		std::cout << "\nResult : FAIL\n";
		std::cout << RESET;
	}
}

int		main()
{
	std::cout << "\n=================\n\n";
	InternMakeForm("shrubery Creation", "shrubery");
	std::cout << "\n=================\n\n";
	InternMakeForm("shrubbery create", "shrubery");
	std::cout << "\n=================\n\n";
	InternMakeForm("Robotomy request", "robotomy");
	std::cout << "\n=================\n\n";
	InternMakeForm("robotomy request", "robotomy");
	std::cout << "\n=================\n\n";
	InternMakeForm("Presidential pardon", "Presidential");
	std::cout << "\n=================\n\n";
	InternMakeForm("presidential pardon", "Presidential");

	return (0);
}