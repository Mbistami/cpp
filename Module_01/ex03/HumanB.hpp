#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    Weapon *weapon;
    std::string name;

public:
    HumanB();
    HumanB(std::string name);
    HumanB(std::string name, Weapon &weapon);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};
