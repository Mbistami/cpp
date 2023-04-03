#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#define MAX_USERS 8
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"


class PhoneBook
{
private:
    int definedContacts;
    int definitionCursor;
    Contact contacts[8];

public:
    PhoneBook();
    ~PhoneBook();
    void appendContact(Contact *contact);
    void handleAction(std::string action);
};
#endif