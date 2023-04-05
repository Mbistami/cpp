#include <string>
#include <iostream>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    const std::string names[4];

public:
    Harl();
    ~Harl();
    void complain(std::string level);
};
