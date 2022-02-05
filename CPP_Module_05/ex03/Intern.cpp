/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:50:20 by soooh             #+#    #+#             */
/*   Updated: 2022/02/06 02:44:43 by soooh            ###   ########.fr       */
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
	Form	*ret = NULL;
	std::cout << "<< create [ " << form << " ]  for \"" << target << "\" >>\n";
	
	int num = ("shrubbery create" == form) * 1
			+ ("robotomy request" == form) * 2
			+ ("presidential pardon" == form) * 3;

	std::cout << "\nIntern creates " ;
	switch (num)
	{
		case 0:
			std::cout << ">> Unknown Form <<" << std::endl;
			break;
		case 1:
			std::cout << "[ " << form << " ] form. This form's target is \" " << target << " \".\n";
			ret = new ShrubberyCreationForm(target);
			break;
		case 2:
			std::cout << "[ " << form << " ] form. This form's target is \" " << target << " \".\n";
			ret = new RobotomyRequestForm(target);
			break;
		case 3:
			std::cout << "[ " << form << " ] form. This form's target is \" " << target << " \".\n";
			ret = new PresidentialPardonForm(target);
			break;
	}

	return ret;
}

const char*	Intern::UnknownFormException::what() const throw()
{
	return (">> Unknown Form <<"); 
}