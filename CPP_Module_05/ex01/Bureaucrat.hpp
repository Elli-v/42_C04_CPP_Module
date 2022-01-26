/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:44:06 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 02:46:48 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception> 
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string		name;
		unsigned int	grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string& name, unsigned int grade);
		Bureaucrat(const Bureaucrat &other); //복사생성자
		Bureaucrat& operator=(const Bureaucrat &other); //할당생성자오버로딩

		std::string		getName() const;
		unsigned int	getGrade() const;
		void			increGrade();
		void			decreGrade();

		void			signForm(Form& form);

		class	GradeTooHighException 
			: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException 
			: public std::exception
		{
			public:
				const char* what() const throw();
		};
};
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);

#endif