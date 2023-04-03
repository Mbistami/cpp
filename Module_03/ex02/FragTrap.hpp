#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    bool isGateKeeperOn;

public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap &operator=(FragTrap &s);
    void attack(std::string name);
    void highFivesGuys(void);
};