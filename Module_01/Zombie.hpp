#include <stdlib.h>
#include <iostream>
#include <iomanip>

class Zombie
{
private:
    std::string name;

public:
    void announce(void);
    Zombie();
    ~Zombie();
};
