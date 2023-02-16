#include <iostream>
#include <string>

#include "PhoneBook.hpp"

int	ft_phone_book_prompt(PhoneBook phone_book, std::string input)
{
	std::cout << "wait for command" << std::endl;
	std::cout << "command : ";
	input.clear();
	std::cin >> input;
	std::cout << input << std::endl;
	if (input == "ADD")
	{
		std::cout << "mode : ADD" << std::endl;
		phone_book.addContact();
	}
	else if (input == "SEARCH")
	{
		std::cout << "mode : SEARCH" << std::endl;
		phone_book.listContacts();
	}
	else if (input == "EXIT")
	{
		std::cout << "mode : EXIT" << std::endl;
		return (1);
	}
	else
	{
		std::cout << "unappropriate command" << std::endl;
		std::cout << "appropriate command - ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}

int main(void)
{
	PhoneBook phone_book;
	std::string input;
	int			exit = 0;

	while (exit == 0)
		exit = ft_phone_book_prompt(phone_book, input);
	return (0);
}
