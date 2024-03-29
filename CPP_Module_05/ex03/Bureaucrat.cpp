/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:33:21 by soooh             #+#    #+#             */
/*   Updated: 2022/02/06 16:40:01 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() { std::cout << "Bureaucrat called" << std::endl; }

Bureaucrat::~Bureaucrat() { std::cout << "Bureaucrat " << name << " Destructor called" << std::endl; }

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade)
{
	std::cout << "Bureaucrat name: " << name << ", grade: " << grade << " called" << std::endl;

	try
	{
		if (grade < 1)
			throw (GradeTooHighException());
		if (grade > 150)
			throw (GradeTooLowException());
		this->name = name;
		this->grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy called" << std::endl;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat operator called" << std::endl;
	name = other.name;
	grade = other.grade;
	return (*this);
}

std::string		Bureaucrat::getName() const { return (name); }

unsigned int	Bureaucrat::getGrade() const { return (grade); }

void	Bureaucrat::increGrade()
{
	std::cout << "increGrade called" << std::endl;
	try
	{
		if (grade <= 1)
			throw (GradeTooHighException());
		grade = grade - 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}	
}

void	Bureaucrat::decreGrade()
{
	std::cout << "decreGrade called" << std::endl;
	try
	{
		if (grade >= 150)
			throw (GradeTooLowException());
		grade = grade + 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("-- Grade too High Max Grade is 1 --\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("-- Grade too Low Min Grade is 150 --\n");
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& Bureaucrat)
{
	os << "[Bureaucrat]" << std::endl;
	os << "Form name: " << Bureaucrat.getName() << std::endl;
	os << "grade sign: " << Bureaucrat.getGrade() << std::endl;
	return (os);
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "[" << name << "] cannot sign [" << form.getName() << "] because " << e.what() << std::endl;
	}	
}

void		Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat >> [" << name << "] execute [" << form.getName() << "]" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Bureaucrat >> [" << name << "] cannot execute [" << form.getName() << "] because ";
		std::cerr << e.what() << std::endl;
	}
}