#include <iostream>
#include <stdio.h>
#include "Contact.hpp"
#include <iomanip>

Contact::Contact(void)
{
    std::cout << "Contact constructor called!" << std::endl;
    if (!isDefined)
    {
        std::cout << "is defined set to false" << std::endl;
        isDefined = false;
    }
    return;
}

Contact::Contact(int request)
{
    std::string fn;
    std::getline(std::cin, fn);
    firstName = fn;
    std::getline(std::cin, fn);
    lastName = fn;
    std::getline(std::cin, fn);
    nickname = fn;
    std::getline(std::cin, fn);
    phoneNumber = fn;
    std::getline(std::cin, fn);
    darkestSecret = fn;
    std::cout << "Created new contact using" << request << firstName << std::endl;
    isDefined = true;
    std::cout << isDefined << std::endl;
}

std::string Truncate(std::string src)
{
    if (src.length() < 10)
        return src;
    char buffer[11];
    int len = src.copy(buffer, 9, 0);

    buffer[len] = '.';
    buffer[10] = '\0';
    std::string newString(buffer);
    return newString;
}

void Contact::PrintDetails()
{
    if (isDefined == true)
    {
        std::cout << "First Name: " << this->firstName << std::endl;
        std::cout << "Last Name" << this->lastName << std::endl;
        std::cout << "Nickname" << this->nickname << std::endl;
        std::cout << "Phone Number" << this->phoneNumber << std::endl;
        std::cout << "Darkest Secret" << this->darkestSecret << std::endl;
        return;
    }
    std::cout << "phonebook: selected user not defined yet!" << isDefined << std::endl;
}

void Contact::DrowLine(size_t i)
{
    std::cout << std::setw(10) << i << "|" << std::ends
              << std::setw(10) << Truncate(this->firstName) << "|" << std::ends
              << std::setw(10) << Truncate(this->lastName) << "|" << std::ends
              << std::setw(10) << Truncate(this->nickname) << "|" << std::ends
              << std::endl;
}

Contact::~Contact(void)
{
    std::cout << "Contact destructor called!" << std::endl;
    return;
}
