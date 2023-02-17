#include <iostream>
#include <iomanip>

#include "Contact.hpp"

void	Contact::setContactFieldStringArray(void)
{
	this->field_string_array[0] = this->first_name;
	this->field_string_array[1] = this->last_name;
	this->field_string_array[2] = this->nickname;
	this->field_string_array[3] = this->phone_number;
	this->field_string_array[4] = this->darkest_secret;
	return ;
}

void	Contact::setContactFieldNameArray(void)
{
	this->field_name_array[0] = "first_name";
	this->field_name_array[1] = "last_name";
	this->field_name_array[2] = "nickname";
	this->field_name_array[3] = "phone_number";
	this->field_name_array[4] = "darkest_secret";
	return ;
}

void	Contact::getContactField(std::string &buffer, int target)
{
	buffer = this->field_string_array[target];
	return ;
}

int	Contact::setContact(void)
{
	this->setContactFieldStringArray();
	this->setContactFieldNameArray();
	for (int i = 0; i < CONTACTFIELD; i++)
	{
		std::cout << "input : " << field_name_array[i] << std::endl;
		std::cin >> this->field_string_array[i];
	}
	return (0);
}

void	Contact::listContact(int index)
{
	std::string	buffer;
	int			len;

	std::cout << std::setw(LISTWIDTH) << index;
	std::cout << std::setw(0) << '|';
	for (int i = 0; i < LISTFIELD; i++)
	{
		this->getContactField(buffer, i);
		len = buffer.length();
		if (len > LISTWIDTH)
		{
			std::cout << std::setw(LISTWIDTH - 1);
			std::cout << buffer.substr(0, LISTWIDTH - 1) << '.';
		}
		else
		{
			std::cout << std::setw(LISTWIDTH);
			std::cout << buffer;	
		}
		if (i < LISTFIELD - 1)
			std::cout << std::setw(0) << '|';
	}
	std::cout << std::endl;
	return ;
}

void	Contact::getContact()
{
	for (int i = 0; i < CONTACTFIELD; i++)
	{
		std::cout << field_name_array[i] << " : ";
		std::cout << this->field_string_array[i] << std::endl;
	}
}