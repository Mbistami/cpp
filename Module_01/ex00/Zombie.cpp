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
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}