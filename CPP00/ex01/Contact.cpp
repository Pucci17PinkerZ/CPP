#include "Contact.hpp"

		int		Contact::set_contact(){

			std::cout << "please enter first_name" << std::endl;
			std::getline(std::cin, first_name);

			std::cout << "please enter last_name" << std::endl;
			std::getline(std::cin, last_name);

			std::cout << "please enter nickname" << std::endl;
			std::getline(std::cin, nickname);

			std::cout << "please enter phone_number" << std::endl;
			std::getline(std::cin, phone_number);

			std::cout << "please enter darkest_secret" << std::endl;
			std::getline(std::cin, darkest_secret);

			if (first_name.empty() || last_name.empty() || nickname.empty() ||
					phone_number.empty() ||darkest_secret.empty() )
			{
				std::cout << "some fields are empty try again" << std::endl;
				return (1);
			}
			//checker si il y a des lettre dans le num de telephone + si il y a des num dans les autres champs
			return (0);
		}

		void	Contact::get_contact_cut(int pos) const{
			
			std::cout << std::setw(10) << pos << "|" << std::endl;
			std::cout << std::setw(10) << first_name << "|" << std::endl;
			std::cout << std::setw(10) << last_name << "|" << std::endl;
			std::cout << std::setw(10) << nickname << "|" << std::endl;
		}

		void	Contact::get_contact_full() const{
			std::cout << "First name :" << first_name << std::endl;
			std::cout << "Last name :" << last_name << std::endl;
			std::cout << "Nickname :" << nickname << std::endl;
			std::cout << "Phone number :" << phone_number << std::endl;
			std::cout << "Darkest secret :" << darkest_secret << std::endl;
		}


