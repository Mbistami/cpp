#include <iostream>

class Fixed
{
private:
    int number;
    static const int nbFractional = 8;

public:
    Fixed(/* args */);
    ~Fixed();
    Fixed(Fixed &f);
    Fixed &operator=(const Fixed &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
