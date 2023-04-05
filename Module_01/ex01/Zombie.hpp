#include <stdlib.h>
#include <iostream>
#include <iomanip>

class Zombie
{
private:
    std::string name;

public:
    void announce(void);
    void setName(std::string);
    Zombie();
    Zombie(std::string name);
    ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);
