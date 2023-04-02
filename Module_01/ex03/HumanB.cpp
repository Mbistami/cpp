#include "HumanB.hpp";

HumanB::HumanB(std::string name)
{
    this->name = name;
}
HumanB::HumanB(std::string name, Weapon *weapon)
{
    this->name = name;
    this->weapon = weapon;
}