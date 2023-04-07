#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *wa = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();                                 // will output the cat sound!
    std::cout << wa->getType() << " " << std::endl;
    wa->makeSound();

    meta->makeSound();

    return 0;
}