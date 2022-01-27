/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:58:13 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 16:05:24 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	:Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	:Form(other) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->Form::operator=(other);
	target = other.target;
	return *this;
}

const std::string& PresidentialPardonForm::getTarget() const { return (target); }

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	//사인 확인
	if (!getIsSigned())
		throw (NotSignedException());
	//실행 확인
	if (executor.getGrade() > getGradeExcute())
		throw(GradeTooLowException());
	//사면
	std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}
