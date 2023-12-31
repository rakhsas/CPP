#include "span.hpp"
int main()
{
    try {
        // std::vector<int> name;
        // name.push_back(2);
        // name.push_back(8);
        // name.push_back(55);
        // name.push_back(10);
        // name.push_back(45);
        // name.push_back(45);
        // name.push_back(45);
        // name.push_back(45);

        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }catch(std::invalid_argument &e ){
        std::cout << "exception: " << e.what() << std::endl;
    }
return 0;
}
