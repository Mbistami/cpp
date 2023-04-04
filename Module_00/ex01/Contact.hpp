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
    bool error;
    std::string readField(std::string field);

public:
    Contact(void);
    Contact(int);
    void DrowLine(size_t i);
    void PrintDetails();
    ~Contact(void);
    bool isDefinedContact(void);
    bool hasError(void);
};
