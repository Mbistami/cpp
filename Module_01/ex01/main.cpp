#include "Zombie.hpp"

Zombie *zombieHord(int N, std::string name)
{
    Zombie *z = new Zombie[N]();
    for (int i = 0; i < N; i++)
    {
        z[i].setName(name);
    }
    return z;
}

int main()
{
    Zombie *z = zombieHord(4, "test");

    for (size_t i = 0; i < 5; i++)
    {
        z[i].announce();
    }
    delete[] z;
    while (1)
    {
        /* code */
    }

    return (1);
}