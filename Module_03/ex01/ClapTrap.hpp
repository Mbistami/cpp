#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int hp;
    int ep;
    int ad;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &c);
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap &c);
    void attack(const std::string &target);
    void takeDammage(unsigned int ad);
    void beRepaired(unsigned int hp);
};