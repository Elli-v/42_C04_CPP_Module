/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:58:13 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 04:22:13 by soooh            ###   ########.fr       */
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
	//사인받았는지 먼저 확인
	if (!getIsSigned())
		throw (NotSignedException());
	//실행할수있는지 확인
	if (executor.getGrade() > getGradeExcute())
	{
		throw(GradeTooLowException());
	}
	//Trillian 을 사면하자
	std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}
