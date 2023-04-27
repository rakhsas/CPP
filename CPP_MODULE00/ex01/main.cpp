#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook book;
    book.Welcome();
    std::string input = "";
    while (input.compare("EXIT")) {
        if (input.compare("ADD") == 0)
            book.AddContact();
        else if (input.compare("SEARCH") == 0) {
            book.PrintContact();
            book.SearchContact();
        }
        std::cout << "> " << std::flush;
        std::cin >> input;
    }
}