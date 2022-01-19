#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap  DiamondTrap("soooh");

	DiamondTrap.attack("test");
	DiamondTrap.takeDamage(5);
	DiamondTrap.beRepaired(5);
	DiamondTrap.whoAmI();

	return (0);
}