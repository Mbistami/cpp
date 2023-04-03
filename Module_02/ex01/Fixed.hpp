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
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
