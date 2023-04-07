#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(std::string type);
    Brain(Brain &b);
    Brain &operator=(Brain &b);
    ~Brain();
    void setIdeas(void);
    void printIdeas(void) const;
    Brain &getBrain (void) const;
};
#endif