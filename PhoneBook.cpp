#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::appendContact(Contact *newContact)
{

    std::cout << "defined contacts " + std::to_string(definedContacts) << std::endl;
    if (definedContacts <= 7)
        contacts[definedContacts] = *newContact;
    else
    {
        definedContacts = 0;
        contacts[definedContacts] = *newContact;
    }
    definedContacts++;
    std::cout << "new total defined " + std::to_string(definedContacts) << std::endl;
}

void PrintTableHeader()
{
    std::cout << std::setw(10) << "index"
              << "|"
              << std::setw(10) << "first name"
              << "|"
              << std::setw(10) << "last name"
              << "|"
              << std::setw(10) << "nick name"
              << "|"
              << std::endl;
}

void PhoneBook::handleAction(std::string action)
{

    if (action == "ADD")
    {
        Contact *c = new Contact(1);
        this->appendContact(c);
    }
    else if (action == "SEARCH")
    {
        int index;

        PrintTableHeader();
        for (size_t i = 0; i < this->definedContacts; i++)
        {
            this->contacts[i].DrowLine(i);
        }
        std::cout << "select index $>";
        std::cin >> index;
        if (index <= 7)
            this->contacts[index].PrintDetails();
    }
}

PhoneBook::PhoneBook()
{
    time_t timeStamp = time(0);
    char *currentTimeStamp = ctime(&timeStamp);
    std::cout << "current timeStamp " << timeStamp << std::endl;
    definedContacts = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Phonebook Constructor" << std::endl;
    definedContacts = 0;
}
