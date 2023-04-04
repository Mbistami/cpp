#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
}

Cat::Cat(Cat &a)
{
    *this = a;
}

Cat::~Cat()
{
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
