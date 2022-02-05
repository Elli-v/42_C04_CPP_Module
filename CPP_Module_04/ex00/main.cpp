#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();	

	const WrongAnimal *wrong = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();
	delete meta;
	delete cat;
	delete dog;
	delete wrong;
	return (0);
}