#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &w);
    ~WrongAnimal();
    std::string getType(void) const;
    void makeSound(void) const;
    WrongAnimal &operator=(WrongAnimal &a);
};

#endif