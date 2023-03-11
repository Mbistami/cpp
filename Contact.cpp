#include <iostream>
#include <stdio.h>
#include "Contact.hpp"

Contact::Contact(void)
{
    std::cout << "Contact constructor called!" << std::endl;
    return;
}

Contact::Contact(std::string fn, std::string ln, std::string ne, std::string pn, std::string ds, std::time_t ts)
{
    firstName = fn;
    lastName = ln;
    nickname = ne;
    phoneNumber = pn;
    darkestSecret = ds;
    time_t cts = time(0);
    timeStamp = timeStamp;
}

Contact::~Contact(void)
{
    std::cout << "Contact destructor called!" << std::endl;
    return;
}
