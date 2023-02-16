#ifndef Contact_HPP
# define Contact_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact{
	private:
		int			my_index;
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
		int		setContact();
		void	listContact();
		void	getContact();
};

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
	for (int i = 0; i < 5; i++)
	{
		std::cout << "input : " << field_name_array[i] << std::endl;
		std::cin >> this->field_string_array[i];
		if (i == 3)
		{
			// phone_number 관련 특수 동작 - 숫자 들어왔는가? string 함수에서 isdigit 계통 같이 깔끔하게 쓰는 법?
			// return (0);
		}
	}
	return (0);
}

void	Contact::listContact(void)
{
	std::string	buffer;
	int			len;

	for (int i = 0; i < 3; i++)
	{
		this->getContactField(buffer, i);
		len = buffer.length();
		std::cout << std::setw(10);
		if (len > 10)
		{
			std::cout << buffer.substr(0, 9) << '.';
		}
		else
		{
			std::cout << buffer;	
		}
		std::cout << std::setw(0) << '|';
	}
	return ;
}

void	Contact::getContact()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << field_name_array[i] << " : ";
		std::cout << this->field_string_array[i] << std::endl;
	}
}

#endif