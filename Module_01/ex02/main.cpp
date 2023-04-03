#include <stdlib.h>
#include <iostream>

int main(void)
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;

    std::cout << stringPTR << std::endl << &stringREF << std::endl << &variable << std::endl << std::endl;
    std::cout << *stringPTR << std::endl << stringREF << std::endl << variable << std::endl;

    return (0);
}