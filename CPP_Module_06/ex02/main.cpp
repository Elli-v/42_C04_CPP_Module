/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:06:02 by soooh             #+#    #+#             */
/*   Updated: 2022/01/29 01:31:11 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate()
{
	int n = rand() % 3;
	if (n == 0)
		return new A();
	else if (n == 1)
		return new B();
	else
		return new C();	
}

void	identify(Base* base)
{
	if (dynamic_cast<A *>(base))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(base))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;	
}

int	main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		Base *base = generate();
		identify(base);
	}
	return 0;
}