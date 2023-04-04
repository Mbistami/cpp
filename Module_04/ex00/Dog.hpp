#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{

public:
    Dog();
    Dog(Dog &c);
    ~Dog();
    void makeSound(void) const;
    Dog &operator=(Dog &a);
};
