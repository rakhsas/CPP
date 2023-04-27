#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str) const {
    std::string input = "";
    bool        valid = false;
    while (!valid)
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        std::cout << input << std::endl;
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

void Contact::init(void)
{
    this->_firstName = this->_getInput("Please Enter Your First Name: ");
    this->_lastName = this->_getInput("Please Enter Your Last Name: ");
    this->_nickname = this->_getInput("Please Enter Your Nick Name: ");
    this->_phoneNumber = this->_getInput("Please Enter Your Number Phone: ");
}

void Contact::view(int i) const
{
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << "|" << i << std::flush;
    std::cout << "|" << this->_firstName << std::flush;
    std::cout << "|" << this->_lastName << std::flush;
    std::cout << "|" << this->_nickname << std::flush;
    std::cout << "|" << std::endl;
}