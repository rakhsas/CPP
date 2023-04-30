#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str) const {
	std::string input;
	bool	valid = false;
	while (!valid)
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (!input.empty())
			valid = true;
		else
			return ("");
	}
	std::cin.clear();
	return (input);
}

void	print_str(std::string str)
{
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 10) << "." << std::flush;
	else
	std::cout << "|" << str << std::flush;
}

int Contact::init(void)
{
	this->_firstName = this->_getInput("Please Enter Your First Name: ");
	if (this->_firstName.empty())
		return  (-1);
	this->_lastName = this->_getInput("Please Enter Your Last Name: ");
	if (this->_lastName.empty())
		return  (-1);
	this->_nickname = this->_getInput("Please Enter Your Nick Name: ");
	if (this->_nickname.empty())
		return  (-1);
	this->_phoneNumber = this->_getInput("Please Enter Your Number Phone: ");
	if (this->_phoneNumber.empty())
		return  (-1);
	this->_darkestSecret = this->_getInput("Please Enter Your Darkest Secret: ");
	if (this->_darkestSecret.empty())
		return  (-1);
	return (0);
}

void Contact::view(int i) const
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << "|" << i + 1 << std::flush;
	print_str(this->_firstName);
	print_str(this->_lastName);
	print_str(this->_nickname);
	print_str(this->_phoneNumber);
	std::cout << "|" << std::endl;
}