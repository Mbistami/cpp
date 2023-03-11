#include "PhoneBook.hpp"
#include <iostream>

void PhoneBook::appendContact(Contact *newContact)
{

    if (definedContacts <= 7)
    {
        contacts[definedContacts] = newContact;
    }
    else
    {
        int oldest = 0;
        time_t timeStamp = time(0);
        char *currentTimeStamp = ctime(&timeStamp);

        for (int i = 0; i < 8; i++)
        {
            if (timeStamp > contacts[i].timeStamp)
            {
                timeStamp = contacts[i].timeStamp;
                oldest = i;
                i = 0;
            }
        }

        contacts[oldest] = newContact;
    }
}

PhoneBook::PhoneBook()
{
    time_t timeStamp = time(0);
    char *currentTimeStamp = ctime(&timeStamp);
    std::cout << "current timeStamp " << timeStamp << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Phonebook Constructor" << std::endl;
    definedContacts = 0;
}