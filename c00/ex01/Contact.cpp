
#include "Contact.hpp"

Contact::Contact () {};
Contact::~Contact () {};

std::string Contact::getFirstName(void) const{
	return (FirstName);
}
std::string Contact::getLastName(void) const{
	return(LastName);
}
std::string Contact::getNickname(void) const{
	return(Nickname);
}
std::string Contact::getPhoneNumber(void) const{
	return(PhoneNumber);
}
std::string Contact::getDarkSecret(void) const{
	return(DarkSecret);
}

void Contact::setFirstName(std::string _FirstName){
	FirstName = _FirstName;
}
void Contact::setLastName(std::string _LastName){
	LastName = _LastName;
}
void Contact::setNickname(std::string _Nickname){
	Nickname =_Nickname;
}
void Contact::setPhoneNumber(std::string _PhoneNumber){
	PhoneNumber = _PhoneNumber;
}
void Contact::setDarkSecret(std::string _DarkSecret){
	DarkSecret = _DarkSecret;
}
