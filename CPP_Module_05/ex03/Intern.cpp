/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:50:20 by soooh             #+#    #+#             */
/*   Updated: 2022/02/06 17:04:29 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern &other) { *this = other; }
Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

Form*	Intern::makeShrubbery(std::string& target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeRobotomy(std::string& target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makePresidential(std::string& target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(std::string form, std::string target)
{
	std::cout << GREEN;
	std::cout << "<< create [ " << form << " ]  for \"" << target << "\" >>\n\n";
	std::cout << RESET;
	try
	{	
		int num = ("shrubbery create" == form) * 1
				+ ("robotomy request" == form) * 2
				+ ("presidential pardon" == form) * 3;

		switch (num - 1)
		{
			case 0:
				std::cout << "\nIntern creates [ " << form << " ] form. This form's target is \" " << target << " \".\n";
				return new ShrubberyCreationForm(target);
				break;
			case 1:
				std::cout << "\nIntern creates [ " << form << " ] form. This form's target is \" " << target << " \".\n";
				return new RobotomyRequestForm(target);
				break;
			case 2:
				std::cout << "\nIntern creates [ " << form << " ] form. This form's target is \" " << target << " \".\n";
				return new PresidentialPardonForm(target);
				break;
		}
		throw UnknownFormException();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Intern cannot create [ " << form << " ] because [ " << e.what() << " ]" << std::endl;
    	return NULL;
	}	
}

const char*	Intern::UnknownFormException::what() const throw()
{
	return ("No Matching Type"); 
}