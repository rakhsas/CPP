#include "BitcoinExchange.hpp"

void openFIle(char * path)
{
    if (access(path, R_OK))
        throw std::invalid_argument("Invalid file path or permission");
    int fd = open(path, O_RDONLY);
    if (fd == -1)
        throw std::invalid_argument("Invalid file path or permission");
    close(fd);
}


int main(int ac, char **Av)
{
    if (ac == 2)
    {
        try {
            openFIle(Av[1]);
            BitcoinExchange(std::string(Av[1]));
        } catch (const std::exception &e )
        {
            std::cout << "\e[0;31m ERROR: " << e.what() << ".\033[0m"<< std::endl;
        }
    }
    else
        std::cout << "\e[0;31m Please Enter the input second database... \033[0m" << std::endl;
}