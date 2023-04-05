#include "utils.cpp"

int main(int ac, char **av) 
{
    if (ac != 4)
    {
        std::cout << "Error: usage: ./main <filename> s1 s2" << std::endl;
        return (1);
    }

    std::string s1(av[2]);

    if (s1.length() == 0)
    {
        std::cout << "Error: usage: ./main <filename> s1 s2" << " S1 can't be empty!" << std::endl;
        return (1);
    }

    handleFile(av[1], av[2], av[3]);
    std::cout << "String replacer: Successfully generated " << av[1] << ".replace" << std::endl;
    return (1);
}