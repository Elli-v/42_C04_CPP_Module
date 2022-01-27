/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:51:43 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 22:27:45 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &other); //복사생성자
		Intern& operator=(const Intern &other); //할당생성자오버로딩

		Form*	makeShrubbery(std::string& target);
		Form*	makeRobotomy(std::string& target);
		Form*	makePresidential(std::string& target);
		Form*	makeForm(std::string form, std::string target);
		class	UnknownFormException 
			: public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif