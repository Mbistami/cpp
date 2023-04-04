#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
}

WrongAnimal::WrongAnimal(WrongAnimal &w)
{
    *this = w;
}

WrongAnimal::~WrongAnimal()
{
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal making sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &a)
{
    this->type = a.getType();
    return (*this);
}