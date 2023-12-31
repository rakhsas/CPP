#include "easyfind.hpp"
// #include <list>
// int main()
// {
//     std::vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     try{
//         std::cout << "easyfind(v, 3): " << easyfind(v, 3) << std::endl;
//         std::cout << "easyfind(v, 5): " << easyfind(v, 5) << std::endl;
//     } catch (std::exception &e) {
//         std::cout << e.what() << std::endl;
//     }
 
//     std::list<int> l;
//     l.push_back(1);
//     l.push_back(2);
//     l.push_back(3);
//     l.push_back(4);
//     try {
//         std::cout << "easyfind(l, 3): " << easyfind(l, 3) << std::endl;
//         std::cout << "easyfind(l, 5): " << easyfind(l, 5) << std::endl;
//     } catch (std::exception &e) {
//         std::cout << e.what() << std::endl;
//     }

//     return 0;
// }

using namespace std;

int areCommon( vector<string>& strs, int index )
{
    char c = strs.at(0).at(index);
    for (int i = 1; i < strs.size(); i++)
    {
        if (strs.at(i).at(index) != c)
            return 0;
    }
    return 1;
}
string longestCommonPrefix(vector<string>& strs) {
    int count = 0;
    for (int i = 0; i < strs.size(); i++)
    {
        for (int j = 0; j < strs.at(i).length(); j++)
        {
            try {
                if (strs.at(i).at(j) != string::npos && areCommon(strs, j) == 1)
                    count++;
            } catch (...)
            {                   
                cout << "test\n";
            }
        }
    }
    return strs.at(0).substr(0, count);
}

int main() {
    vector<string> name;
    name.push_back("flower");
    name.push_back("flow");
    name.push_back("flight");

    cout << longestCommonPrefix(name) << endl;
}