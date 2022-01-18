#include "Brain.hpp"

#include "Brain.hpp"

Brain::Brain()
{
    std::string ideas[] = {"sleep", "eat", "play", "drink", "walk"};

    for (int i = 0; i < 100; i++)
        this->_ideas[i] = ideas[std::rand() % 5];
}

Brain::Brain(Brain const &other)
{
    *this = other;
}


Brain::~Brain()
{
}

Brain const &Brain::operator=(Brain const &other)
{
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    return (*this);
}
