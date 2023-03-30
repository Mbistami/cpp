#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook pb = PhoneBook();
    std::string prompt;

    while (std::cout << "ADD | SEARCH | EXIT $>" << std::ends && std::getline(std::cin, prompt))
    {
        if (prompt == "EXIT")
            break;
        pb.handleAction(prompt);
    }
}