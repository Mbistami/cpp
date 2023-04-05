#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Constructer called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "~Zombie " << this->name << " died" << std::endl;
}

void Zombie::announce()
{
    if (this->name.length() >= 0)
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
}