#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->hp = 100;
    this->ep = 100;
    this->ad = 30;
    this->isGateKeeperOn = false;
}

FragTrap::FragTrap(std::string name)
{
    FragTrap n;
    n.name = name;
    *this = n;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructer called!" << std::endl;
}

void FragTrap::attack(std::string name)
{
    if (!this->ep)
    {
        std::cout << this->name << " no ep left!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " attacks " << name << ", causing " << this->ad << " points of dammage!" << std::endl;
    this->ep--;
}

FragTrap &FragTrap::operator=(FragTrap &s)
{
    this->name = s.name;
    this->hp = s.hp;
    this->ep = s.ep;
    this->ad = s.ad;
    this->isGateKeeperOn = false;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "✋" << std::endl;
}