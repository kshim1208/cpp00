#include <iostream>
#include <string>

#include "PhoneBook.hpp"

int ft_search_prompt(PhoneBook &phone_book)
{
	int index;

	std::cout << "wait for index" << std::endl;
	std::cout << "command : ";
	std::cin >> index;
	if (index >= 0 && index <= (phone_book.getContactNumber() - 1))
	{
		phone_book.getIndexedContact(index);
		return (0);
	}
	return (1);
}

int	ft_phone_book_prompt(PhoneBook &phone_book)
{
	std::string input;
	int			ret = 0;

	std::cout << "wait for command" << std::endl;
	std::cout << "command : ";
	std::cin >> input;
	if (input == "ADD")
	{
		std::cout << "mode : ADD" << std::endl;
		phone_book.addContact();
	}
	else if (input == "SEARCH")
	{
		std::cout << "mode : SEARCH" << std::endl;
		ret = phone_book.listContacts();
		if (ret == 0)
			ft_search_prompt(phone_book);
	}
	else if (input == "EXIT")
	{
		std::cout << "mode : EXIT" << std::endl;
		return (1);
	}
	else
	{
		std::cout << "inappropriate command" << std::endl;
		std::cout << "appropriate command - ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}

int main(void)
{
	PhoneBook phone_book;

	int			exit = 0;

	while (exit == 0)
		exit = ft_phone_book_prompt(phone_book);
	return (0);
}
