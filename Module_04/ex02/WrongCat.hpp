#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{

public:
    WrongCat();
    WrongCat(WrongCat &c);
    ~WrongCat();
    void makeSound(void) const;
    WrongCat &operator=(WrongCat &a);
};
