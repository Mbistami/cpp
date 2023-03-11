#include <string>
#include <ctime>

#ifndef CONTACT_H
#define CONTACT_H
class Contact
{
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    std::time_t timeStamp;

    Contact(void);
    Contact(std::string fn, std::string ln, std::string ne, std::string pn, std::string ds, std::time_t ts);
    ~Contact(void);
    bool isDefined();
};
#endif