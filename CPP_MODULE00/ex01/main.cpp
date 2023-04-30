#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	book.Welcome();
	std::string command;
	bool input_cleared = false;
	while (true)
	{
		if (!input_cleared) {
			std::cout << "> " << std::flush;
			std::getline(std::cin, command);
			if (std::cin.eof())
				break ;
		}
		input_cleared = false;
		if (command.empty())
			continue;
		else if (command == "ADD")
			book.AddContact();
		else if (command == "SEARCH")
		{
			if (book.SearchContact() == -2)
				break ;
		}
		else if (command == "EXIT")
			return 0;
		else
			std::cout << "\033[0;30mInvalid command \033[0m\n" << std::endl;
		std::cin.clear();
	}
}