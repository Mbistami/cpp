#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("aziz1");
    for (int i = 0; i < 50; i++)
    {
        c.attack("aziz");
        if (i == 45)
            c.guardGate()
    }
    c.attack("ahmed");

    return 1;
}