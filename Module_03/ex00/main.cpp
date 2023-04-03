#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("aziz1");
    for (int i = 0; i < 10; i++)
    {
        c.attack("aziz");
    }
    c.attack("ahmed");

    return 1;
}