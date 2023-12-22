#pragma once


#include "iostream"
#include "vector"
#include <algorithm>

class Span
{
    private:
        unsigned int            _size;
    public:
        std::vector<int>    vector;
        Span(unsigned int);
        Span(Span const &);
        Span &operator=(Span const &);
        ~Span();
        void    addNumber(int);
        void    addNumber( std::vector<int>::iterator, std::vector<int>::iterator );
        int     shortestSpan();
        int     longestSpan();
        unsigned int     getSize() const;
};