#include <string>
#include <ctime>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    bool isDefined;

public:
    Contact(void);
    Contact(int request);
    void DrowLine(size_t i);
    void PrintDetails();
    ~Contact(void);
};
