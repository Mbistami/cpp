#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "DOG constructer called" << std::endl;
    this->type = "Dog";
    isAllocated = true;
    this->b = new Brain();
}

Dog::Dog(Dog &c)
{
    std::cout << "DOG copy constructer called" << std::endl;
    this->b = new Brain(*c.b);
    this->type = c.getType();
}

Dog::~Dog()
{
    std::cout << "DOG destructer called" << std::endl;
    if (isAllocated)
    delete this->b;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Dog &Dog::operator=(Dog &a)
{
    std::cout << "DOG copy asignement operator called" << std::endl;
    this->type = a.getType();
    if (a.isAllocated)
        *this->b = *a.b;
    else
        this->b = new Brain(*a.b);
    return (*this);
}
