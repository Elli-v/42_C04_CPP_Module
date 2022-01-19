#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragtrap("soooh");
	FragTrap fragtrap2;
	fragtrap2 = FragTrap("elli");
	FragTrap fragtrap3(fragtrap);

	fragtrap.attack("Enemy");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	
	fragtrap2.attack("Enemy2");
	fragtrap2.takeDamage(4);
	fragtrap2.beRepaired(2);
	fragtrap2.highFivesGuys();

	fragtrap3.attack("Enemy3");
	fragtrap3.takeDamage(9);
	fragtrap3.beRepaired(3);
	fragtrap3.highFivesGuys();

	return (0);
}