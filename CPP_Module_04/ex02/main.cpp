#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal *animal[10];
	for (int i = 0; i < 10 ; i++)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}

	std::cout << "DEEP COPY!!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	Dog copy(*(Dog *)animal[4]);
	for (int i = 0; i < 100; ++i)
	{
		std::cout << copy.getBrain()->getIdea(i) << "    ";
		std::cout << ((Dog *)animal[4])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << "-----------------------------"
				<< std::endl;

	for (int i = 0; i < 10; i++)
		delete animal[i];
	return (0);
}