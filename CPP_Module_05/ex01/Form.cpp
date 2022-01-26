/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:07:41 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 03:10:34 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("unknown"), gradeSign(0), gradeExcute(0), isSigned(false)
{ std::cout << ">> Default Form called <<" << std::endl; }

Form::~Form() { std::cout << "Form " << name << " Destructor called" << std::endl; }

Form::Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExcute)
	:name(name), gradeSign(gradeSign), gradeExcute(gradeExcute), isSigned(false)
{
	std::cout << "Form name: " << name 
		<< ", grade_sign: " << gradeSign 
		<< ", grade_excute: " << gradeExcute 
		<< " called" << std::endl;
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
	std::cout << "Form copy called" << std::endl;
	*this = other;
}

Form& Form::operator=(const Form &other)
{
	std::cout << "Form operator called" << std::endl;
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