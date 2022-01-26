/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:22:51 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 04:21:45 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	:Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	:Form(other) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->Form::operator=(other);
	return *this;
}

const std::string& ShrubberyCreationForm::getTarget() const { return (target); }

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw (NotSignedException());

	if (executor.getGrade() > getGradeExcute())
	{
		throw(GradeTooLowException());
	}
	std::string outfileName = target + "_shrubbery";
	std::string	tree =	"     *       \n";
	tree = tree + 		"    ***      \n";
	tree = tree + 		"   *****     \n";
	tree = tree + 		"  *******    \n";
	tree = tree + 		"    |||      \n";
	tree = tree + 		"____|||_____ \n";
	try{
		std::ofstream	outfile(outfileName);
		outfile << tree;
		outfile.close();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}