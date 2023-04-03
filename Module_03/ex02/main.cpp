#include "FragTrap.hpp"

int main()
{
    FragTrap c("aziz1");
    for (int i = 0; i < 100; i++)
    {
        c.attack("aziz");
        if (i == 95)
            c.highFivesGuys();
    }
    c.attack("ahmed");

    return 1;
}