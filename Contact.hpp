#include <string>
#include <ctime>

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
    Contact(int request);
    void DrowLine(size_t i);
    void PrintDetails();
    ~Contact(void);
};
