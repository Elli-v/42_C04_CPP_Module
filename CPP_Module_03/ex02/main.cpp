#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft1("ft1");
	FragTrap ft2 = FragTrap("FT2");
	FragTrap ft3(ft1);
	
	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	ft1.attack("Enemy");
	ft1.takeDamage(110);
	ft1.beRepaired(5);
	ft1.highFivesGuys();
	
	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;
	
	ft2.attack("Enemy2");
	ft2.takeDamage(4);
	ft2.beRepaired(2);
	ft2.takeDamage(8);
	ft2.highFivesGuys();
	
	std::cout << std::endl;
	std::cout << "[====================Round 3====================]" << std::endl;

	ft3.attack("Enemy3");
	ft3.takeDamage(9);
	ft3.beRepaired(3);
	ft3.highFivesGuys();

	std::cout << std::endl;

	return (0);
}