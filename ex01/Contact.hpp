#ifndef Contact_HPP
# define Contact_HPP

# include <string>

# define LISTWIDTH 10
# define LISTFIELD 3
# define CONTACTFIELD 5

class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string	field_string_array[5];
		std::string field_name_array[5];
		void	setContactFieldStringArray();
		void	setContactFieldNameArray();
		void	getContactField(std::string &buffer, int target);
	public:
		void	getContact();
		int		setContact();
		void	listContact(int index);
};

#endif