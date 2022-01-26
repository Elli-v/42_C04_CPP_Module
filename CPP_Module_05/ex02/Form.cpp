/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:07:41 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 04:06:57 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("unknown"), gradeSign(0), gradeExcute(0), isSigned(false) {}

Form::~Form() {}

Form::Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExcute)
	:name(name), gradeSign(gradeSign), gradeExcute(gradeExcute), isSigned(false)
{
	try
	{
		if (gradeSign < 1 || gradeExcute < 1)
			throw (GradeTooHighException());
		if (gradeSign > 150 || gradeExcute > 150)
			throw (GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

Form::Form(const Form &other)
	:name(other.getName()), gradeSign(other.getGradeSign()), gradeExcute(other.getGradeExcute())
{
	*this = other;
}

Form& Form::operator=(const Form &other)
{
	isSigned = other.isSigned;
	return *this;
}

std::string		Form::getName() const { return (name); }

unsigned int	Form::getGradeSign() const { return (gradeSign); }

unsigned int	Form::getGradeExcute() const { return (gradeExcute); }

bool			Form::getIsSigned() const { return (isSigned); }

void			Form::beSigned(Bureaucrat& Bur)
{
	if (Bur.getGrade() <= gradeSign)
		this->isSigned = true;
	else
		throw (Form::GradeTooLowException());
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

const char* Form::NotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "[Form]" << std::endl;
	os << "Form name: " << form.getName() << std::endl;
	os << "grade sign: " << form.getGradeSign() << std::endl;
	os << "grade excute: " << form.getGradeExcute() << std::endl;
	os << "Signed or Not Signed: ";
		if (form.getIsSigned())
			os << "Signed!" << std::endl;
		else
			os << "Not Signed" << std::endl;
	return (os);
}
