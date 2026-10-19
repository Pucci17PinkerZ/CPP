# include "Contact.hpp"
# include "Phonebook.hpp"

int main(void)
{
	Phonebook phonebook;
	std::string line;

	while (true)
	{
		std::cout << "Enter One of thoses commands : ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::cout << "\nExit" << std::endl;
			break;
		}
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
			phonebook.search_contact();
		else if (line == "EXIT")
			break;
		else 
			std::cout << "Unknown input. Please try again" << std::endl;
	}
	return (0);
}