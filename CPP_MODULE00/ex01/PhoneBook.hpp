#ifndef PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contact[8];
public:
	PhoneBook(/* args */);
	~PhoneBook();
	void	AddContact(void);
	int	SearchContact(void);
	void	Welcome(void) const;
	void	PrintContact(void);
};

#endif