#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "ANIMAL constructer called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "ANIMAL destructor" << std::endl;
}

void Animal::makeSound() const
{
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal::Animal(Animal &a)
{
    *this = a;
}

Animal &Animal::operator=(Animal &a)
{
    this->type = a.getType();
    return (*this);
}