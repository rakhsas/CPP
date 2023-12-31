#pragma once


#include <stack>
#include <iostream>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack() {}
        MutantStack(MutantStack const &src) : std::stack<T, Container>(src) {}
        ~MutantStack() {}
        MutantStack &operator=(MutantStack const &src) {
            if (this == &src)
                return *this;
            std::stack<T, Container>::operator=(src);
            return *this;
        }
        typedef typename Container::iterator iterator;
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};