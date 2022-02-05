/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:20:59 by soooh             #+#    #+#             */
/*   Updated: 2022/02/05 21:42:35 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &other); //복사생성자
		Cat& operator=(const Cat &other); //할당생성자오버로딩
		virtual void makeSound() const;

		Brain*	getBrain();
		std::string	getBrainIdea(unsigned int idx);
		int			addBrainIdea(std::string idea);
};

#endif
