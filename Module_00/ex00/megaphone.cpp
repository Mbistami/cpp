#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;

    if (ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    while (j != ac && av[j][i])
    {
        if (av[j][i] >= 'a' && av[j][i] <= 'z')
            std::cout << (char)std::toupper((char)av[j][i]);
        else
            std::cout << (char)((char)av[j][i]);
        i++;
        if (av[j][i] == '\0')
        {
            j++;
            i = 0;
        }
    }
    std::cout << std::endl;
    return (0);
}