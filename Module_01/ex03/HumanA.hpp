#include "Weapon.hpp"

class HumanA
{
private:
    Weapon weapon;
    std::string name;

public:
    HumanA();
    HumanA(std::string name, Weapon newWeapon);
    ~HumanA();
    void attack();
};
