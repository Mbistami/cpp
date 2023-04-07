#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WRONGANIMAL constructor called" << std::endl;

}

WrongAnimal::WrongAnimal(WrongAnimal &w)
{
    std::cout << "WRONGANIMAL copy constructor called" << std::endl;

    *this = w;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WRONGANIMAL destructer called" << std::endl;

}

void WrongAnimal::makeSound() const
{
    std::cout << "WRONGANIMAL making sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &a)
{
    std::cout << "WRONGANIMAL copy asignement operator called" << std::endl;
    this->type = a.getType();
    return (*this);
}