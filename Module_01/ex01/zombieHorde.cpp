#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 0)
    {
        std::cout << "Zombie hord cannot be lower than 0 generated a 2 zombies hord" << std::endl;
        Zombie * z = new Zombie[2]();
        for (int i = 0; i < N; i++)
        {
            z[i].setName("UnexpectedZombie!");
        }
        return z;
    }
    else {
        Zombie *z = new Zombie[N]();
        for (int i = 0; i < N; i++)
        {
            z[i].setName(name.length() > 0 ? name : "defaultName");
        }
        return z;
    }
}