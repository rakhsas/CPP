#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	book.Welcome();
	std::string input = "";
	// while (input.compare("EXIT")) {
	//     if (input.compare("ADD") == 0)
	//         book.AddContact();
	//     else if (input.compare("SEARCH") == 0) {
	//         book.SearchContact();
	//     }
	//     input.clear();
	//     std::cin >> input;
	// }
	while(1)
	{
		std::string command;
		std::cout << "> " << std::flush;
		std::cin >> command;
		if (command.length() == 0)
			continue;
		if (command.compare("ADD") == 0)
			book.AddContact();
		else if (command.compare("SEARCH") == 0)
		{
			if (book.SearchContact() == -1)
				{
					std::cin.clear();
					continue ;
				}
		}
		else if (command.compare("EXIT") == 0)
			return (0);
		else if (command.compare("") == 0)
		{
			std::cin.clear();
			continue ;
		}
		else
			std::cout << "\033[0;30mInvalid command \033[0m\n" << std::endl;
	}
}