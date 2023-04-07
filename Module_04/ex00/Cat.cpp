#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "CAT constructer called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat &a)
{
    *this = a;
}

Cat::~Cat()
{
    std::cout << "CAT destructer called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

Cat &Cat::operator=(Cat &a)
{
    this->type = a.getType();
    return (*this);
}
