# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook{

	private :
		Contact list[8];
		int total_mbr;
		int oldest;

	public:
		Phonebook();
		void	add_contact();
		void	print_contact_tab() const;
		void	search_contact() const;
};

# endif