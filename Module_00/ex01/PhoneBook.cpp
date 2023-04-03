#include "PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <sstream>

void PhoneBook::appendContact(Contact *newContact)
{

    if (definedContacts < 7 || definitionCursor < definedContacts)
    {
        definitionCursor++;
        if (definedContacts < 7)
            definedContacts++;
        contacts[definitionCursor] = *newContact;
    }
    else
    {
        definitionCursor = 1;
        contacts[definitionCursor] = *newContact;
    }
}

void PrintTableHeader()
{
    std::cout <<"\033[1;31m"<< std::setw(10) << "index"
              << "|" << std::ends
              << std::setw(10) << "first name"
              << "|" << std::ends
              << std::setw(10) << "last name"
              << "|" << std::ends
              << std::setw(10) << "nick name"
              << "|\033[0m" << std::ends
              << std::endl;
    
}

void PhoneBook::handleAction(std::string action)
{

    if (action == "ADD")
    {
        Contact *c = new Contact(1);
        this->appendContact(c);
        delete c;
    }
    else if (action == "SEARCH")
    {
        std::string index;

        PrintTableHeader();
        for (size_t i = 0; i <= (size_t)this->definedContacts; i++)
            if (this->contacts[i].isDefinedContact())
                this->contacts[i].DrowLine(i);

        std::cout << "select index $>" << std::ends;
        std::getline(std::cin, index);
        if (atoi(index.c_str()) >= 0 && atoi(index.c_str()) <= 8)
            return this->contacts[atoi(index.c_str())].PrintDetails();
        std::cout << "user not found." << std::endl;
    }
    else
        std::cout << "PhoneBook: Unknow command '\e[1m" << action << "\e[0m' use [ADD | SEARCH | EXIT]" << std::endl;
}

PhoneBook::PhoneBook()
{
    definedContacts = 0;
    definitionCursor = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "See you soon!" << std::endl;
    definedContacts = 0;
}
