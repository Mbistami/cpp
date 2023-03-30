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
}

void PrintTableHeader()
{
    std::cout << std::setw(10) << "index"
              << "|" << std::ends
              << std::setw(10) << "first name"
              << "|" << std::ends
              << std::setw(10) << "last name"
              << "|" << std::ends
              << std::setw(10) << "nick name"
              << "|" << std::ends
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
        std::string index;
        std::size_t integerVal;

        PrintTableHeader();
        for (size_t i = 0; i < this->definedContacts; i++)
        {
            this->contacts[i].DrowLine(i);
        }

        std::cout << "select index $>" << std::ends;
        std::getline(std::cin, index);
        try
        {
            std::stoi(index, &integerVal, 10);
            if (integerVal >= 0 && integerVal <= 8)
                return this->contacts[std::atoi(index.c_str())].PrintDetails();
        }
        catch (...)
        {
            std::cerr << index << ": invalid index!\nindex must be integer." << std::endl;
            return;
        }
        std::cout << "user not found." << std::endl;
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
    std::cout << "See you soon!" << std::endl;
    definedContacts = 0;
}
