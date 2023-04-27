#include "PhoneBook.hpp"
#include <chrono>
#include <thread>
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
	static int	i;
	if (i == 3)
		i = 0;
	this->contact[i].init();
	i++;
}

void PhoneBook::PrintContact(void)
{
	std::cout << "---------Contacts---------" << std::endl;
	for (size_t i = 0; i < 3; i++)
		this->contact[i].view(i);
}

int _ReadInput()
{
	int	n;
	while (1)
	{
		n = 0;
		std::cin >> n;
		if(n < 0 || n > 8 || !std::cin.good())
		{
			std::cout << "Invalid Index!!, Please Re-enter ..." << std::endl;
			return (-1);
		}
	}
	return (n);
}

int PhoneBook::SearchContact()
{
	PrintContact();
	int	index = -1;
	index = _ReadInput();
	if (index > 8 || index < 0)
		return (-1);
 	this->contact[index].view(index);
	return (0);
}