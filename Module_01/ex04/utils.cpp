#include <iostream>
#include <string>
#include <sstream>
#include <istream>
#include <fstream>
#include <ostream>


void handleFile(std::string filename, std::string s1, std::string s2)
{
    std::string line;
    std::ifstream srcFile(filename);
    std::ofstream outPut(filename + ".replace");
    unsigned long pos = -1;

    while (std::getline(srcFile, line))
    {
        while ((pos = line.find(s1, pos + 1)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);   
        }
        outPut << line << std::endl;
    }
}