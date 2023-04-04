class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(Brain &b);
    Brain &operator=(Brain &b);
    ~Brain();
};
