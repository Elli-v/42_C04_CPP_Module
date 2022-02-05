/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:22:41 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 16:01:24 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

# define CYAN "\e[36m"
# define GREEN "\e[32m"
# define RESET "\e[0m"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &other); //복사생성자
		WrongAnimal &operator=(const WrongAnimal &other); //할당생성자오버로딩
		
		WrongAnimal(const std::string& type);
		void makeSound() const;
		std::string getType(void) const;
};

#endif
