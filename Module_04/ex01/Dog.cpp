#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
}

Dog::Dog(Dog &c)
{
    *this = c;
}

Dog::~Dog()
{
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Dog &Dog::operator=(Dog &a)
{
    this->type = a.getType();
    return (*this);
}
