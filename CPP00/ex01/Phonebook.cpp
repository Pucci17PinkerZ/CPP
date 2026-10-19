#include "Phonebook.hpp"

	Phonebook::Phonebook() : total_mbr(0), oldest(0) {}

	void	Phonebook::add_contact(){

		std::cout << "adding a new contact" << std::endl;
		if (list[oldest].set_contact())
			return ;
		std::cout << "new contact added succesfully" << std::endl;
		oldest = (oldest + 1) % 8;
		if (total_mbr < 8)
			total_mbr++;
	}

	void	Phonebook::print_contact_tab() const{
		std::cout << std::setw(10) << "Index" << "|"
				  << std::setw(10) << "First Name" << "|"
				  << std::setw(10) << "Last Name" << "|"
				  << std::setw(10) << "Nickname" << std::endl;

	}

	void	Phonebook::search_contact() const{
		std::string input;
		int index;

		if (total_mbr == 0)
		{
			std::cout << "You have no contact please go outside meet the world" << std::endl;
			return ;
		}
		print_contact_tab();
		for(int i = 0; i < total_mbr; i++)
			list[i].get_contact_cut(i);
		std::cout << "Enter the index of the contact you want to display :" ;
		std::getline(std::cin, input);
		if (input.length() != 1 || std::isdigit(input[0]))
		{
			std::cout << "Wrong index" << std::endl;
			return ;
		}
		index = input[0] - '0';
		if (index < 0 || index > total_mbr)
		{
			std::cout << "Index out of range" << std::endl;
			return ;
		}
		list[index].get_contact_full();
	}
