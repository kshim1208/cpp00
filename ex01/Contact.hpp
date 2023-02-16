#ifndef Contact_HPP
# define Contact_HPP

// 여기에서 string 정의하면 main 있는 프로그램 파일에는 어떻게 처리할까?
	// string 헤더에 들어가서 확인해보니 헤더 가드 존재했음.
	// 여기에도 선언해도 지장 없을 것 같음.
# include <string>
# include <iostream>

class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string	field_string_array[5];
		std::string field_name_array[5] = {
			"first_name", "last_name", "nickname", "phone_number", "darkest_secret"};
	public:
			void	setContactFieldStringArray();
			void	setContact();
			void	listContact();
			void	getFirst_name(std::string& buffer);
			void	getLast_name(std::string& buffer);
			void	getNickname(std::string& buffer);
			void	getPhone_number(std::string& buffer);
			void	getDarkest_secret(std::string& buffer);
};

// 얕은 복사이다. 찾아본대로 동작한다면 참조만 저장될 것이다.
void	Contact::setContactFieldStringArray(void)
{
	this->field_string_array[0] = this->first_name;
	this->field_string_array[1] = this->last_name;
	this->field_string_array[2] = this->nickname;
	this->field_string_array[3] = this->phone_number;
	this->field_string_array[4] = this->darkest_secret;
	return ;
}

void	Contact::setContact(void)
{
	this->setContactFieldStringArray();
	for (int i = 0; i < 5; i++)
	{
		std::cout << "input : " << field_name_array[i] << std::endl;
		std::cin >> this->field_string_array[i];
		if (i == 3)
			// phone_number 관련 특수 동작 - 숫자 들어왔는가?
	}
	return ;
}

void	Contact::listContact(void)
{
	std::string	buffer;
	int			len;


	std::cout << std::setw(10);
	getFirst_name(buffer);
	len = buffer.length();
	if (len > 10)
	{
		// 9개만 출력
		// . 출력
	}
	else
	{
		std::cout << buffer;	
	}
	std::cout << std::setw(0) << '|';

	// 3번 반복
		// -> 각 단계 별로 가져오는 string만 다르면 동작은 동일.
		// 특정 반복수 -> index와 데이터 연결할 방법
	return ;
}

// = 연산자의 기능이 복사? 참조? 제대로 확인 ==> 얕은 복사임.
void	Contact::getFirst_name(std::string& buffer)
{
	buffer = this->first_name;
	return ;
}

void	Contact::getLast_name(std::string& buffer)
{
	buffer = this->last_name;
	return ;
}

void	Contact::getNickname(std::string& buffer)
{
	buffer = this->nickname;
	return ;
}

void	Contact::getPhone_number(std::string& buffer)
{
	buffer = this->phone_number;
	return ;
}

void	Contact::getDarkest_secret(std::string& buffer)
{
	buffer = this->darkest_secret;
	return ;
}

#endif