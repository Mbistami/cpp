#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WRONGCAT constructor called" << std::endl;
    this->type = "Cat";
}

WrongCat::WrongCat(WrongCat &c)
{
    std::cout << "WRONGCAT copy constructor called" << std::endl;
    *this = c;
}

WrongCat::~WrongCat()
{
    std::cout << "WRONGCAT constructer called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &c)
{
    std::cout << "WRONGCAT copy asignement operator called" << std::endl;
    this->type = c.getType();
    return (*this);
}