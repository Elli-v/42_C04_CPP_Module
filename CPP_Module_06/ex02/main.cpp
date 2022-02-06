/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soooh <soooh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:06:02 by soooh             #+#    #+#             */
/*   Updated: 2022/02/06 18:50:12 by soooh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate()
{
	srand(time(NULL));
	int i = rand();
	if (i % 3 == 0)
		return new A();
	else if (i % 3 == 1)
		return new B();
	else
		return new C();
}

void	identify(Base* base)
{
	if (dynamic_cast<A*>(base))
	{
		std::cout << "Real class : A\n";
		return ;
	}
	else if (dynamic_cast<B*>(base))
	{
		std::cout << "Real class : B\n";
		return ;
	}
	else if (dynamic_cast<C*>(base))
	{
		std::cout << "Real class : C\n";
		return ;
	}
	std::cerr << "This pointer cannot cast because it does not include A, B nor C\n";
}

void	identify2(Base& base)
{
	Base check;
	try
	{
		check = dynamic_cast<A&>(base);
		std::cout << "Real class : A\n";
	}
	catch(std::exception& e)
	{
		try
		{
			check = dynamic_cast<B&>(base);
			std::cout << "Real class : B\n";
		}
		catch(std::exception& e)
		{
			try
			{
				check = dynamic_cast<C&>(base);
				std::cout << "Real class : C\n";
			}
			catch(std::exception& e)
			{
				std::cerr << "This reference cannot cast because ";
				std::cerr << e.what() << std::endl;

			}
		}
	}
}

int	main()
{
	Base*	testA = new A();
	Base*	testB = new B();
	Base*	testC = new C();
	Base*	testN = new Base();

	Base	base;
	A		a;
	B		b;
	C		c;
	Base&	refA = a;
	Base&	refB = b;
	Base&	refC = c;
	Base&	refN = base;

	std::cout << ">> test pointer cast <<\n";
	identify(testA);
	identify(testB);
	identify(testC);
	identify(testN);
	identify(&refB);

	std::cout << std::endl;
	std::cout << ">> test reference cast <<\n";
	identify2(refA);
	identify2(refB);
	identify2(refC);
	identify2(refN);
	identify2(*testA);

	delete testA;
	delete testB;
	delete testC;
	delete testN;

	std::cout << std::endl;
	std::cout << ">> test reference cast <<\n";

	Base*	random = generate();
	identify(random);

	delete random ;
}