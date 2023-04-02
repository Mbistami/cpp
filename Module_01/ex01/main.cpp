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

    delete[] z;
    return (1);
}