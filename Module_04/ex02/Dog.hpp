#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
private: 
    bool isAllocated;
    Brain *b;

public:
    Dog();
    Dog(Dog &c);
    ~Dog();
    void makeSound(void) const;
    Dog &operator=(Dog &a);
};
