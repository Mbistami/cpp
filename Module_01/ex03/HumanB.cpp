#include "HumanB.hpp"

HumanB::HumanB()
{
    this->weapon = NULL;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}
HumanB::HumanB(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}
void HumanB::attack()
{
    if (this->weapon != NULL)
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}

HumanB::~HumanB()
{
}
