#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    Weapon &weapon;
    std::string name;

public:
    HumanA(std::string name, Weapon &newWeapon);
    ~HumanA();
    void attack();
};
