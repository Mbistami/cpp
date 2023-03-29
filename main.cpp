#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook pb = PhoneBook();
    std::string prompt;

    while (1)
    {
        std::cout << "ADD | SEARCH | EXIT $>";
        std::cin >> prompt;
        pb.handleAction(prompt);
    }
}