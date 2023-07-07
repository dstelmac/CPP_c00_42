
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {

	private:
		Contact _contacts[8];
		int _index;
	public:
		PhoneBook();
		~PhoneBook();

		void set_index(int index){
			_index = index;
		}
		int addContact ();
		int searchContact ();	
};

#endif