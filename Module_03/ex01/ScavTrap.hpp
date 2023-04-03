#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    bool isGateKeeperOn;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap &operator=(ScavTrap &s);
    void attack(std::string name);
    void guardGate();
};