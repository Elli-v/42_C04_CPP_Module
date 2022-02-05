/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:20:10 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 21:32:54 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

# define CYAN "\e[36m"
# define GREEN "\e[32m"
# define RESET "\e[0m"

class Brain
{
	private:
		std::string		ideas[100];
		unsigned int	cnt;
	public:
		Brain();
		~Brain();
		Brain(const Brain &other); //복사생성자
		Brain &operator=(const Brain &other); //할당생성자오버로딩
		std::string	getIdea(unsigned int index) const;
		int	addIdea(const std::string& idea);
};
#endif