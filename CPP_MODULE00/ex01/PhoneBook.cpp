#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook()
{

}
PhoneBook::~PhoneBook()
{

}

void PhoneBook::Welcome(void) const {
	std::cout << std::endl;
	std::cout << " Welcome to your PhoneBook " << std::endl;
	std::cout << std::endl;
	std::cout << "--------------USAGE-------------" << std::endl;
	std::cout << "|ADD\t: To add a new contact.\t|" << std::endl;
	std::cout << "|SEARCH\t: To search a contact.  |" << std::endl;
	std::cout << "|EXIT\t: To quit the PhoneBook.|" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;
}

void PhoneBook::AddContact(void) {
	static int	i = 0;
	if (i == 8)
		i = 0;
	this->contact[i].init();
	i++;
}

void PhoneBook::PrintContact(void)
{
	std::cout << "---------Contacts---------" << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->contact[i].view(i);
}

int _ReadInput()
{
	std::string n;
	int input = 0;
	while (1)
	{
		std::cout << "<> : ";
		std::getline(std::cin, n);
		input = atoi(n.c_str());
		if (std::cin.eof())
			return (-2);
		if (input > 0 && input < 10)
			return (input);
		std::cout << "Invalid Index!!, Please Re-enter ..." << std::endl;
	}
	return (-1);
}

int	PhoneBook::SearchContact(void)
{
	int	index;

	index = -1;
	PrintContact();
	index = _ReadInput();
	if (index == -2)
		return (-2);
	std::cout << index << std::endl;
	this->contact[index - 1].view(index - 1);
	return (0);
}
