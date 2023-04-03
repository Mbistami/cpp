#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "DEBUG" << std::endl;
}

void Harl::info()
{
    std::cout << "INFO" << std::endl;
}

void Harl::warning()
{
    std::cout << "WARNING" << std::endl;
}

void Harl::error()
{
    std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*fp[4])(void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    const std::string names[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
    for (int i = 0; i < 4; i++)
    {
        if (names[i] == level)
            (this->*fp[i])();
    }
}