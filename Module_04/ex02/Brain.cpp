#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "BRAIN constructer called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "idea";
    }
}

Brain::Brain(std::string type)
{
    std::cout << "BRAIN named constructer called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = type + " idea";
    }
}

Brain::Brain(Brain &s)
{
    std::cout << "BRAIN copy constructer called" << std::endl;

    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = s.ideas[i];
    }
}

Brain::~Brain()
{
    
}

Brain &Brain::operator=(Brain &b)
{
    std::cout << "BRAIN copy asignement operator called" << std::endl;

    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = b.ideas[i];
    }
    return (*this);
}

void Brain::setIdeas(void){
    int ci = 10;

    for (int i = 0; i < ci; i++)
    {
        this->ideas[i] = "new idea";
    }
    
}

void Brain::printIdeas(void)const {
    for (size_t i = 0; i < 100; i++)
    {
        std::cout << this->ideas[i] << std::endl;
    }
}

