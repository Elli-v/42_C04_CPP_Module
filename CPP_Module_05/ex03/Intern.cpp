/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:50:20 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 22:40:18 by soooh            ###   ########.fr       */
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
	std::cout << "<< create [ " << form << " ]  for \"" << target << "\" >>\n";
	Form*	(Intern::*func[])(std::string&) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};
	new ShrubberyCreationForm(target);
	new RobotomyRequestForm(target);
	new PresidentialPardonForm(target);
	std::string	formList[] = {
		"shrubbery create",
		"robotomy request",
		"presidential pardon"
	};
	int i = 0;
	while (i < 3)
	{
		if (formList[i] == form)
			break;
		else
			i++;
	}
	try
	{
		if(i == 3)
			throw(UnknownFormException());
		std::cout << "\tIntern creates [ " << form << " ] form. This form's target is \" " << target << " \".\n";
		return (this->*func[i])(target);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();
	}
	return NULL;
}

const char*	Intern::UnknownFormException::what() const throw()
{
	return (">> Unknown Form <<"); 
}