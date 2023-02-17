#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define PHONEBOOKFIELD 8

class PhoneBook
{
	private:
		Contact contacts[PHONEBOOKFIELD];
		int		contact_number;

	public:
		PhoneBook();
		int		addContact();
		void	rotateContacts();
		int		listContacts();
		int		getContactNumber();
		void	getIndexedContact(int index);
};

#endif