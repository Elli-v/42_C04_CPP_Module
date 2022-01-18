#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("soooh");
	ClapTrap claptrap2;
	claptrap2 = ClapTrap("elli");
	ClapTrap claptrap3(claptrap);

	claptrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	
	claptrap2.attack("Enemy2");
	claptrap2.takeDamage(4);
	claptrap2.beRepaired(2);

	claptrap3.attack("Enemy3");
	claptrap3.takeDamage(9);
	claptrap3.beRepaired(3);

	return (0);
}