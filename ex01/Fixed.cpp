#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructer called" << std::endl;
    this->number = 0;
}

Fixed::~Fixed()
{
    std::cout << "Deconstructer called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    this->number = f.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return (out);
}

int Fixed::getRawBits() const
{
    return (this->number);
}

void Fixed::setRawBits(int const raw)
{
    this->number = raw;
}

Fixed::Fixed(const float i)
{
    int scaleFactor = (1 << this->nbFractional);
    this->setRawBits(roundf((float)i * scaleFactor));
}

Fixed::Fixed(const int i)
{
    int scaleFactor = (1 << this->nbFractional);
    this->setRawBits(i * scaleFactor);
}

float Fixed::toFloat() const
{
    int scaleFactor = (1 << this->nbFractional);
    return (((float)this->getRawBits() / scaleFactor));
}

int Fixed::toInt() const
{
    int scaleFacotr = (1 << this->nbFractional);
    int scaledVal = this->number * scaleFacotr;
    return (this->number / scaleFacotr);
}
