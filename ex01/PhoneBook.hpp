#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# include <iomanip>

// class 선언 form 찾아보기
class PhoneBook
{
	// private:
		Contact contacts[8];
		int		contact_number;
	public:
		PhoneBook();
		void	addContact();
		void	rotateContacts();
		void	listContacts();
};

PhoneBook::PhoneBook()
{
	contact_number = 0;
	return ;
}

void	PhoneBook::addContact(void)
{
	if (this->contact_number == 8)
	{
		this->rotateContacts();
		this->contacts[7].setContact();
	}
	else
	{
		this->contacts[this->contact_number].setContact();
		this->contact_number++;
	}
	return ;
}

void	PhoneBook::rotateContacts(void)
{
	Contact	&tmp = this->contacts[0];

	for (int i = 0; i < 7; i++)
	{
		this->contacts[i] = this->contacts[i + 1];
	}
	this->contacts[7] = tmp;
	return ;
}

void	PhoneBook::listContacts(void)
{
	int	num = this->contact_number;

	if (num == 0)
		std::cout << "there are no contact right now" << std::endl;
	for (int i = 0; i < num; i++)
	{
		std::cout << std::setw(10) << static_cast<char>(i);
		std::cout << std::setw(0) << '|';
		this->contacts[i].listContact();
	}
	return ;
}

#endif