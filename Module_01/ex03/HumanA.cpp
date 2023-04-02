#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon): weapon(newWeapon)
{
    this->weapon = newWeapon;
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}