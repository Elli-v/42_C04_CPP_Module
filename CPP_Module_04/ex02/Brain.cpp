/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:26:19 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 21:59:04 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain():cnt(0)
{
	std::cout << CYAN;
	std::cout << "Brain🧠 Default Constructor called" << std::endl;
	std::cout << RESET;
}

Brain::~Brain()
{
	std::cout << CYAN;
	std::cout << "Brain🧠 Destructor called" << std::endl;
	std::cout << RESET;
}

Brain::Brain(const Brain &other)
{
	std::cout << CYAN;
	std::cout << "Brain🧠 Copy Constructor called" << std::endl;
	std::cout << RESET;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << CYAN;
	std::cout << "Brain🧠 Assignation operator called" << std::endl;
	for (cnt = 0; cnt < other.cnt; cnt++)
		ideas[cnt] = other.ideas[cnt];
	std::cout << RESET;
	return (*this);
}

std::string	Brain::getIdea(unsigned int index) const
{
	std::cout << CYAN;
	if (index >= 100 || ideas[index].empty())
	{
		std::cout << "Wrong index" << std::endl;
		return (NULL) ;
	}
	std::cout << RESET;
	return (ideas[index]);
}

int Brain::addIdea(const std::string& idea)
{
	if (cnt < 100)
	{
		ideas[cnt] = idea;
		cnt++;
		return (cnt);
	}
	std::cout << "Idea cannot add because Brain is full already" << std::endl;
	return (-1) ;
}