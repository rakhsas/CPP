#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdio>
class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	int			_index;
	std::string	_getInput(std::string str) const;

public:
	Contact();
	~Contact();
	int	init(void);
	void	view(int	index) const;
	void	setIndex(int	i);

};

#endif