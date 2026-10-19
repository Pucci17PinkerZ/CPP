# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include 
#include "Contact.hpp"

class Phonebook{

	private :
		Contact list[8];
		int total_mbr;

	public:
		void	add_contact();
		void	search_contact() const;
};

# endif