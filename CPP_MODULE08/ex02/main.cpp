#include "MutantStack.hpp"

void main11()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void main1()
{
    MutantStack<int, std::vector<int> > mstack;
    mstack.push(3);
    mstack.push(190);
    mstack.push(17);
    MutantStack< int, std::vector<int> >::iterator it_begin = mstack.begin();
    MutantStack< int, std::vector<int> >::iterator it_end = mstack.end();
    while (it_begin != it_end)
    {
        std::cout << *it_begin << std::endl;
        it_begin++;
    }
}

int main()
{
    main11();
    std::cout << "----------------\n";
    main1();
}