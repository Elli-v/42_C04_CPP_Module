/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:57:43 by soooh             #+#    #+#             */
/*   Updated: 2022/01/27 04:18:08 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm &other); //복사생성자
		PresidentialPardonForm& operator=(const PresidentialPardonForm &other); //할당생성자오버로딩

		std::string const & getTarget() const;
		virtual void execute(Bureaucrat const & executor) const;	
};

#endif