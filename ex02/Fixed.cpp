#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    this->number = 0;
}

Fixed::~Fixed()
{
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

bool Fixed::operator!=(const Fixed &r) const
{
    bool res = (bool)this->getRawBits() != r.getRawBits();
    return (res);
}

bool Fixed::operator==(const Fixed &r) const
{
    bool res = (bool)this->getRawBits() == r.getRawBits();
    return (res);
}

bool Fixed::operator<=(const Fixed &r) const
{
    bool res = this->getRawBits() <= r.getRawBits();
    return (res);
}

bool Fixed::operator>=(const Fixed &r) const
{
    bool res = this->getRawBits() >= r.getRawBits();
    return (res);
}

bool Fixed::operator>(const Fixed &r) const
{
    bool res = this->getRawBits() > r.getRawBits();
    return (res);
}

bool Fixed::operator<(const Fixed &r) const
{
    bool res = this->getRawBits() < r.getRawBits();
    return (res);
}

Fixed Fixed::operator*(const Fixed &f) const
{
    Fixed n(f);
    int scaleFactor = (1 << this->nbFractional);

    n.setRawBits((f.getRawBits() * this->getRawBits()) / scaleFactor);

    return (n);
}

Fixed Fixed::operator+(const Fixed &f) const
{
    Fixed n(f);
    n.setRawBits(f.getRawBits() + this->getRawBits());

    return (n);
}

Fixed Fixed::operator-(const Fixed &f) const
{
    Fixed n(f);
    n.setRawBits(f.getRawBits() - this->getRawBits());

    return (n);
}

Fixed Fixed::operator/(const Fixed &f) const
{
    int scaleFactor = (1 << this->nbFractional);
    Fixed n(f);
    n.setRawBits(f.getRawBits() / this->getRawBits() * scaleFactor);

    return (n);
}

Fixed &Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);
    this->setRawBits(this->getRawBits() + 1);
    return (old);
}

Fixed &Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);
    this->setRawBits(this->getRawBits() - 1);
    return (old);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return b;
    return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return b;
    return a;
}