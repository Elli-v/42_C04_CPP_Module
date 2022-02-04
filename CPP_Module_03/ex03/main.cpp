#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap dt1("dt1");
	DiamondTrap dt2 = DiamondTrap("dt2");
	DiamondTrap dt3(dt1);
	
	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	dt1.attack("Enemy");
	dt1.takeDamage(10);
	dt1.beRepaired(5);
    dt1.guardGate();
    dt1.highFivesGuys();
	dt1.whoAmI();
	
	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;
	
	dt2.attack("Enemy2");
	dt2.takeDamage(40);
	dt2.beRepaired(20);
	dt2.takeDamage(80);
    dt2.guardGate();
    dt2.highFivesGuys();
	dt2.whoAmI();
	
	std::cout << std::endl;
	std::cout << "[====================Round 3====================]" << std::endl;

	dt3.attack("Enemy3");
	dt3.takeDamage(90);
	dt3.beRepaired(30);
    dt3.guardGate();
    dt3.highFivesGuys();
	dt3.whoAmI();

	std::cout << std::endl;

	return (0);
}