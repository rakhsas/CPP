#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str) const {
	std::string input;
	bool        valid = false;
	// std::cin.clear();
	while (!valid)
	{
        std::cout << str << std::flush;
		std::cin >> input;
		if (!input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid Input;";
		}
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

void Contact::init(void)
{
	this->_firstName = this->_getInput("Please Enter Your First Name: ");
	this->_lastName = this->_getInput("Please Enter Your Last Name: ");
	this->_nickname = this->_getInput("Please Enter Your Nick Name: ");
	this->_phoneNumber = this->_getInput("Please Enter Your Number Phone: ");
	this->_darkestSecret = this->_getInput("Please Enter Your Darkest Secret: ");
}

void Contact::view(int i) const
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << "|" << i << std::flush;
	print_str(this->_firstName);
	print_str(this->_lastName);
	print_str(this->_nickname);
	print_str(this->_phoneNumber);
	std::cout << "|" << std::endl;
}