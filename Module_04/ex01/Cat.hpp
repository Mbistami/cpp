#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{

public:
    Cat();
    Cat(Cat &c);
    ~Cat();
    void makeSound(void) const;
    Cat &operator=(Cat &a);
};
