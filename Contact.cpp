#include <iostream>
#include <stdio.h>
#include "Contact.hpp"
#include <iomanip>

Contact::Contact(void)
{
    std::cout << "Contact constructor called!" << std::endl;
    return;
}

Contact::Contact(int request)
{
    std::string fn;
    std::cin >> fn;
    firstName = fn;
    std::cin >> fn;
    lastName = fn;
    std::cin >> fn;
    nickname = fn;
    std::cin >> fn;
    phoneNumber = fn;
    std::cin >> fn;
    darkestSecret = fn;
    time_t cts = time(0);
    timeStamp = timeStamp;
    std::cout << "Created new contact " + firstName << std::endl;
}

void Contact::PrintDetails()
{
    std::cout << "First Name" << std::setw(10) << this->firstName << std::endl;
    std::cout << "Last Name" << std::setw(10) << this->lastName << std::endl;
    std::cout << "Nickname" << std::setw(10) << this->nickname << std::endl;
    std::cout << "Phone Number" << std::setw(10) << this->phoneNumber << std::endl;
    std::cout << "Darkest Secret" << std::setw(10) << this->darkestSecret << std::endl;
}

void Contact::DrowLine(size_t i)
{
    std::cout << std::setw(10) << i << "|"
              << std::setw(10) << this->firstName << "|"
              << std::setw(10) << this->lastName << "|"
              << std::setw(10) << this->nickname << "|"
              << std::endl;
}

Contact::~Contact(void)
{
    std::cout << "Contact destructor called!" << std::endl;
    return;
}
