#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->hp = 100;
    this->ep = 50;
    this->ad = 20;
    this->isGateKeeperOn = false;
}

ScavTrap::ScavTrap(std::string name)
{
    ScavTrap n;
    n.name = name;
    *this = n;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructer called!" << std::endl;
}

void ScavTrap::attack(std::string name)
{
    if (!this->ep)
    {
        std::cout << this->name << " no ep left!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << name << ", causing " << this->ad << " points of dammage!" << std::endl;
    this->ep--;
}

void ScavTrap::guardGate()
{
    this->isGateKeeperOn = !this->isGateKeeperOn;
    std::cout << "Gate keeper mode " << (this->isGateKeeperOn ? "ON!" : "OFF!") << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &s)
{
    this->name = s.name;
    this->hp = s.hp;
    this->ep = s.ep;
    this->ad = s.ad;
    this->isGateKeeperOn = false;
    return (*this);
}