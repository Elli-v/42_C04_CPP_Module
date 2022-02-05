/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:54:00 by soooh             #+#    #+#             */
/*   Updated: 2022/02/06 02:21:41 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	:Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	:Form(other) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->Form::operator=(other);
	target = other.target;
	return *this;
}

const std::string& RobotomyRequestForm::getTarget() const { return (target); }

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw (NotSignedException());
	if (executor.getGrade() > getGradeExcute())
		throw(GradeTooLowException());
	std::cout << "beeppp beep!! beep! ";
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " I am a robot!\n";
	else
		std::cout << this->getTarget() << " making robot is fail!\n";
}