#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap contructer called!" << std::endl;
    hp = 10;
    ep = 10;
    ad = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hp = 10;
    ep = 10;
    ad = 0;
}

ClapTrap::ClapTrap(ClapTrap &c)
{
    *this = c;
}

ClapTrap &ClapTrap::operator=(ClapTrap &c)
{
    this->name = c.name;
    this->ep = c.ep;
    this->ad = c.ad;
    this->hp = c.hp;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructer called!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (ep == 0 || ep < 0)
    {
        std::cout << "ClapTrap " << this->name << " no energy left!" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->ad << " points of dammage! epLeft: " << ep << std::endl;
    ep--;
}

void ClapTrap::takeDammage(unsigned int d)
{
    this->hp -= d;
    std::cout << "ClapTrap " << this->name << " Dammaged " << d << std::endl;
}

void ClapTrap::beRepaired(unsigned int d)
{
    if (ep == 0 || ep < 0)
    {
        std::cout << "ClapTrap " << this->name << " no energy left!" << std::endl;
        return;
    }

    this->hp += d;
    std::cout << "ClapTrap " << this->name << " Healed " << d << std::endl;
}