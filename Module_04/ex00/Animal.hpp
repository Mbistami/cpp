#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    ~Animal();
    Animal(Animal &a);
    Animal &operator=(Animal &a);
    std::string getType(void) const;
    virtual void makeSound(void) const;
};

#endif