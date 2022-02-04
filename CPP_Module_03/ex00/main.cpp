#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("soooh");
	ClapTrap claptrap2;
	claptrap2 = ClapTrap("elli");
	ClapTrap claptrap3(claptrap);
	
	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	claptrap.attack("Enemy");
	claptrap.takeDamage(11);
	claptrap.beRepaired(5);
	
	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;

	claptrap2.attack("Enemy2");
	claptrap2.takeDamage(4);
	claptrap2.beRepaired(2);
	claptrap2.takeDamage(8);
	
	std::cout << std::endl;
	std::cout << "[====================Round 3====================]" << std::endl;

	claptrap3.attack("Enemy3");
	claptrap3.takeDamage(9);
	claptrap3.beRepaired(3);

	std::cout << std::endl;

	return (0);
}