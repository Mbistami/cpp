#include "Contact.hpp"
#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
class PhoneBook
{
private:
    Contact *contacts[8];
    int definedContacts;

public:
    PhoneBook(/* args */);
    ~PhoneBook();
    void appendContact(Contact *contact);
};
#endif