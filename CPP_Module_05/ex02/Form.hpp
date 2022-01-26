/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 01:44:06 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 04:06:42 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat; //서로 다른 클래스가 서로를 이용하는 경우 따로 클래스 선언을 해 줘야 한다 (헤더는 컴파일러에 적용되는 것임)

class Form
{
	private:
		const std::string	name;
		const unsigned int	gradeSign;
		const unsigned int	gradeExcute;
		bool				isSigned;

		Form();
	public:
		virtual ~Form();
		Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExcute);
		Form(const Form &other); //복사생성자
		Form& operator=(const Form &other); //할당생성자오버로딩

		std::string		getName() const;
		unsigned int	getGradeSign() const;
		unsigned int	getGradeExcute() const;
		bool			getIsSigned() const;
		void			beSigned(Bureaucrat& Bur);
		
		virtual void	execute(Bureaucrat const & executor) const = 0;

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
		class	NotSignedException 
			: public std::exception
		{
			public:
				const char* what() const throw();
		};
};
std::ostream &operator<<(std::ostream &os, Form const &form);

#endif