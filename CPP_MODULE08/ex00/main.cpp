#include "easyfind.hpp"
#include <list>
int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    std::cout << "vector: ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    try{
        std::cout << "easyfind(v, 3): " << easyfind(v, 3) << std::endl;
        std::cout << "easyfind(v, 5): " << easyfind(v, 5) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
 
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    std::cout << "list: ";
    for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    try {
        std::cout << "easyfind(l, 3): " << easyfind(l, 3) << std::endl;
        std::cout << "easyfind(l, 5): " << easyfind(l, 5) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}