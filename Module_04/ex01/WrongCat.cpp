#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Cat";
}

WrongCat::WrongCat(WrongCat &c)
{
    *this = c;
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &c)
{
    this->type = c.getType();
    return (*this);
}