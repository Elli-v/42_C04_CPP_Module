#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavtrap("soooh");
	ScavTrap scavtrap2;
	scavtrap2 = ScavTrap("elli");
	ScavTrap scavtrap3(scavtrap);

	scavtrap.attack("Enemy");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(5);
	scavtrap.guardGate();
	
	scavtrap2.attack("Enemy2");
	scavtrap2.takeDamage(4);
	scavtrap2.beRepaired(2);
	scavtrap2.guardGate();

	scavtrap3.attack("Enemy3");
	scavtrap3.takeDamage(9);
	scavtrap3.beRepaired(3);
	scavtrap3.guardGate();

	return (0);
}