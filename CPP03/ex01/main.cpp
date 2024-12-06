#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap    claptrap1("1");
    ClapTrap    claptrap2("2");

    std::cout << "\nBattle" << std::endl;
    claptrap1.attack(claptrap2.getName());
    claptrap2.takeDamage(claptrap1.getAttackDamage());

    claptrap2.attack(claptrap1.getName());
    claptrap1.takeDamage(claptrap2.getAttackDamage());
    claptrap1.printInfo();
    claptrap2.printInfo();

    std::cout << "\nRepair" << std::endl;
    claptrap1.beRepaired(5);
    claptrap2.beRepaired(5);
    claptrap1.printInfo();
    claptrap2.printInfo();

    std::cout << "\nUse all energy" << std::endl;
    for (int i = 0; i < 12; i++)
        claptrap1.attack(claptrap2.getName());
    claptrap1.printInfo();
    claptrap2.printInfo();

    std::cout << "\nCritical Damage" << std::endl;
    claptrap1.takeDamage(20);
    claptrap2.takeDamage(20);
    claptrap1.printInfo();
    claptrap2.printInfo();

    std::cout << "No Energy try Repair" << std::endl;
    claptrap1.beRepaired(10);
    claptrap1.printInfo();
    claptrap2.printInfo();

    return (0);
}