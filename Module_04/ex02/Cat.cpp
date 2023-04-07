#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    isAllocated = true;
    this->b = new Brain();
    std::cout << "CAT constructer called" << std::endl;

}

Cat::Cat(Cat &a)
{
    this->b = new Brain(*a.b);
    this->type = a.getType();
    std::cout << "CAT copy constructer called" << std::endl;
}

Cat::~Cat()
{
    if (isAllocated)
    delete this->b;
    std::cout << "CAT deconstructer called" << std::endl;

}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

Cat &Cat::operator=(Cat &a)
{
    delete this->b;
    this->b = new Brain(*a.b);
    this->type = a.getType();
    return (*this);
}

void Cat::setNewIdeas(void) const
{
    this->b->setIdeas();
}

Brain &Cat::getBrain(void) const  {
    return (*this->b);
}