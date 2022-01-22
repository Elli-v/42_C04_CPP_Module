/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:26:19 by soooh             #+#    #+#             */
/*   Updated: 2022/01/23 00:41:45 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "This is Brain🧠" << std::endl;
	const std::string ideas[] = { "🐶", "🐱", "🐭", "🐹", "🐰", "🦊", "🐻", "🐼", "🐯", "🐸", "🦄" };

	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
		//랜덤으로 값 출력해서 깊은 복사했을 때 제대로 복사 되었는지 확인해야 함
		std::cout << " " << this->ideas[i];
	}
	std::cout << std::endl;
}

Brain::~Brain()
{
	std::cout << "ByeBye Brain🧠" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0;i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0;i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

std::string const &Brain::getIdea(int index) const
{
	return this->ideas[index];
}