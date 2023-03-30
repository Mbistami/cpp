#include "Contact.hpp"
#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#define MAX_USERS 8

class PhoneBook
{
private:
    int definedContacts;
    Contact contacts[8];

public:
    PhoneBook(/* args */);
    ~PhoneBook();
    void appendContact(Contact *contact);
    void handleAction(std::string action);
};
#endif