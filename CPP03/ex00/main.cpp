#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap    clapTrapA("A");
    ClapTrap    clapTrapB("B");

    std::cout << "\nBattle" << std::endl;
    clapTrapA.attack(clapTrapB.getName());
    clapTrapB.takeDamage(clapTrapA.getAttackDamage());

    clapTrapB.attack(clapTrapA.getName());
    clapTrapA.takeDamage(clapTrapB.getAttackDamage());
    clapTrapA.printInfo();
    clapTrapB.printInfo();

    std::cout << "\nRepair" << std::endl;
    clapTrapA.beRepaired(5);
    clapTrapB.beRepaired(5);
    clapTrapA.printInfo();
    clapTrapB.printInfo();

    std::cout << "\nUse all energy" << std::endl;
    for (int i = 0; i < 12; i++)
        clapTrapA.attack(clapTrapB.getName());
    clapTrapA.printInfo();
    clapTrapB.printInfo();

    std::cout << "\nCritical Damage" << std::endl;
    clapTrapA.takeDamage(20);
    clapTrapB.takeDamage(20);
    clapTrapA.printInfo();
    clapTrapB.printInfo();

    std::cout << "\nNo Energy try Repair" << std::endl;
    clapTrapA.beRepaired(10);
    clapTrapA.printInfo();
    clapTrapB.printInfo();

    return (0);
}