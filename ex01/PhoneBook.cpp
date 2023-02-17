#include <iostream>
#include <iomanip>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contact_number = 0;
	return ;
}

int	PhoneBook::addContact(void)
{
	int	ret = 0;

	if (this->contact_number == PHONEBOOKFIELD)
	{
		this->rotateContacts();
		this->contacts[7].setContact();
	}
	else
	{
		ret = this->contacts[this->contact_number].setContact();
		if (ret == 1)
			return (ret);
		this->contact_number++;
	}
	return (ret);
}

void	PhoneBook::rotateContacts(void)
{
	Contact	&tmp = this->contacts[0];

	for (int i = 0; i < PHONEBOOKFIELD - 1; i++)
	{
		this->contacts[i] = this->contacts[i + 1];
	}
	this->contacts[7] = tmp;
	return ;
}

int	PhoneBook::listContacts(void)
{
	int	num = this->contact_number;

	if (num == 0)
	{
		std::cout << "there are no contact right now" << std::endl;
		return (1);
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			this->contacts[i].listContact(i);
		}
	}
	return (0);
}

int	PhoneBook::getContactNumber(void)
{
	return (this->contact_number);
}

void	PhoneBook::getIndexedContact(int index)
{
	this->contacts[index].getContact();
	return ;
}