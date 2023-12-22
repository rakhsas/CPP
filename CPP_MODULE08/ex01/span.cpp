#include "span.hpp"

Span::Span(unsigned int n): _size(n)
{}

Span::Span( Span const &src )
{
    *this = src;
}
Span::~Span(){}
Span &Span::operator=( Span const &src )
{
    if (this == &src)
        return *this;
    _size = src.getSize();
    vector = src.vector;
    return *this;
}

unsigned int Span::getSize() const { return _size; }

void    Span::addNumber( int n ) {
    // for (size_t i = 0; i < vector.size(); i++)
    // {
    //     if (vector.at(i) == n)
    //         throw std::invalid_argument("ERROR: element elready exist on the vector!!!.");
    // }
    if (vector.size() == getSize())
        throw std::invalid_argument("ERROR: Span Exceeded the max size");
    vector.push_back(n);
}

int    Span::shortestSpan() {
    if (vector.size() <= 1)
        throw std::invalid_argument("ERROR: No span can be found.");
    std::sort(vector.begin(), vector.end());
    int min = vector.at(1) - vector.at(0);
    for (size_t i = 1; i < vector.size() - 1; i++)
    {
        if (vector.at(i + 1) - vector.at(i) < min)
            min = vector.at(i + 1) - vector.at(i);
    }
    return min;
}

void    Span::addNumber( std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end)
{
    if (std::distance(it_begin, it_end) + vector.size() > getSize())
        throw std::invalid_argument("ERROR: Span Exceeded the max size");
    vector.insert(vector.end(), it_begin, it_end);
}

int     Span::longestSpan() {
    if (vector.size() <= 1)
        throw std::invalid_argument("ERROR: No span can be found.");
    // std::sort(vector.begin(), vector.end());
    // int max = vector.at(vector.size() - 1) - vector.at(0);
    int max = *std::max_element(vector.begin(), vector.end());
    int min = *std::min_element(vector.begin(), vector.end());
    return max - min;
}
