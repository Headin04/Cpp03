#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap John("John");
    ClapTrap Steve("Steve");
    ScavTrap Bob("Bob");

    Steve.attack("John");
    John.takeDamage(Steve.getAttackDamage());
    John.beRepaired(Steve.getAttackDamage());
    John.attack("Steve");
    Steve.takeDamage(John.getAttackDamage());
    Steve.beRepaired(John.getAttackDamage());
    Bob.guardGate();
    Bob.attack("John");
    John.takeDamage(Bob.getAttackDamage());
    John.beRepaired(Bob.getAttackDamage());
    Bob.attack("Steve");
    Steve.takeDamage(Bob.getAttackDamage());
    std::cout << "Bob has " << Bob.getEnergyPoints() << " Energy Points left." << std::endl;
}