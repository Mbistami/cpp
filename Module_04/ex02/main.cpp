#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Animal c;
    Animal *a = new Cat();

    a->makeSound();

    delete a;
    return 0;
}