#ifndef PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contact[8];
	int		read(void);
public:
	PhoneBook(/* args */);
	~PhoneBook();
	void	AddContact(int index);
	void	SearchContact(void);
	// void	PrintContact(void);
};

#endif