
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include<iostream>

class Contact{
	private:
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkSecret;

	public:
	
	Contact ();
	~Contact ();

	std::string getFirstName(void)const;
	std::string getLastName(void)const;
	std::string getNickname(void)const;
	std::string getPhoneNumber(void)const;
	std::string getDarkSecret(void)const;

	void setFirstName(std::string _FirstName);
	void setLastName(std::string _LastName);
	void setNickname(std::string _Nickname);
	void setPhoneNumber(std::string _PhoneNumber);
	void setDarkSecret(std::string _DarkSecret);


};

#endif