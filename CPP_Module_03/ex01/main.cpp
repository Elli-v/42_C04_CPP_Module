#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavtrap1("st1");
	ScavTrap scavtrap2("st2");
	ScavTrap scavtrap3(scavtrap1);
	
	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	scavtrap1.attack("Enemy");
	scavtrap1.takeDamage(110);
	scavtrap1.beRepaired(5);
	scavtrap1.guardGate();
	
	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;
	
	scavtrap2.attack("Enemy2");
	scavtrap2.takeDamage(4);
	scavtrap2.beRepaired(2);
	scavtrap2.takeDamage(8);
	scavtrap2.guardGate();
	
	std::cout << std::endl;
	std::cout << "[====================Round 3====================]" << std::endl;

	scavtrap3.attack("Enemy3");
	scavtrap3.takeDamage(9);
	scavtrap3.beRepaired(3);
	scavtrap3.guardGate();

	std::cout << std::endl;

	return (0);
}