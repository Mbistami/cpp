#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("name");
    z->announce();
    randomChump("lame");
    delete z;

    return (0);
}