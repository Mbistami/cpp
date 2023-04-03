#include <iostream>

class Fixed
{
private:
    int number;
    static const int nbFractional = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &f);
    Fixed(const float i);
    Fixed(const int i);
    Fixed &operator=(const Fixed &f);

    bool operator!=(const Fixed &r) const;
    bool operator==(const Fixed &f) const;
    bool operator<=(const Fixed &f) const;
    bool operator>=(const Fixed &f) const;
    bool operator>(const Fixed &f) const;
    bool operator<(const Fixed &f) const;

    Fixed operator*(const Fixed &f) const;
    Fixed operator+(const Fixed &f) const;
    Fixed operator-(const Fixed &f) const;
    Fixed operator/(const Fixed &f) const;

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
