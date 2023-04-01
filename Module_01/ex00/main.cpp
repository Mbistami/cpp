#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("Zombax");
    z->announce();
    randomChump("Zombix");
    return (1);
}