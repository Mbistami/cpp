#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "Brain.hpp"
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    Animal(Animal &a);
    Animal &
    operator=(Animal &a);
    std::string getType(void) const;
    void virtual makeSound(void) const = 0;
};

#endif