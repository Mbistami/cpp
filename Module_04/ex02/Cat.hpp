#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
private:
    bool isAllocated;
    Brain *b;

public:
    Cat();
    Cat(Cat &c);
    ~Cat();
    void makeSound(void) const;
    Cat &operator=(Cat &a);
    void setNewIdeas(void) const;
    Brain &getBrain(void) const;
};
