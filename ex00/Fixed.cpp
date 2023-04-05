#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
    std::cout << "Default constructer called" << std::endl;
    this->number = 0;
}

Fixed::~Fixed()
{
    std::cout << "Deconstructer called" << std::endl;
}

Fixed::Fixed(Fixed &f)
{
    std::cout << "Copy constructer called" << std::endl;
    *this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy asignement operator called" << std::endl;
    this->number = f.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits constructer called" << std::endl;
    return (this->number);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits constructer called" << std::endl;
    this->number = raw;
}