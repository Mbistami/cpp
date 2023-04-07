#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "DOG constructer called" <<std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog &c)
{
    *this = c;
}

Dog::~Dog()
{
    std::cout << "DOG destructer called" << std::endl;
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
