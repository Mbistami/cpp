#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;

public:
    HumanB(std::string name);
    HumanB(std::string name, Weapon *weapon);
    ~HumanB();
};

HumanB::~HumanB()
{
}
