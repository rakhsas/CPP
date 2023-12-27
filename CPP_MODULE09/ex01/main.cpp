#include "RPN.hpp"

int main(int ac, char **Av)
{
    if (ac == 2)
    {
        try {
            RPN ref(Av[1]);
        } catch (const std::exception &e )
        {
            std::cout << "\e[0;31m ERROR: " << e.what() << ".\033[0m"<< std::endl;
        }
    }
    else
        std::cout << "\e[0;31mError: USES: ./RPN `numbers...`.\033[0m" << std::endl;
}