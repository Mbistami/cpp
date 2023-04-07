#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *list[10];
    Cat c1;
    Cat c2(c1);

    c1.getBrain().printIdeas();
    std::cout << "______" <<std::endl;
    c2.getBrain().printIdeas();

    c1.getBrain().setIdeas();
    c1.getBrain().printIdeas();
    std::cout << "______" <<std::endl;
    c2.getBrain().printIdeas();
    

    
    for (int i = 0; i < 6; i++)
    {
        
        list[i] = new Cat();

    }
    for (int i = 5; i < 10; i++)
    {
        
        list[i] = new Dog();

    }
    for (int i = 0; i < 10; i++)
    {
        list[i]->makeSound();
        delete list[i];
    }
    
    
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // will output the cat sound!
    j->makeSound();
    
    delete j;
    delete i;

    return 0;
}