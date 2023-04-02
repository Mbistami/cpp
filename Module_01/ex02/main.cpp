#include <stdlib.h>
#include <iostream>

int main(void)
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;

    std::cout << &stringPTR << " " << &stringREF << " " << &variable << std::endl;
    std::cout << stringPTR << " " << stringREF << " " << variable << std::endl;

    return (0);
}