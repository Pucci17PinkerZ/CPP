#include "Contact.hpp"

		int		Contact::set_contact(){

			std::cout << "please enter _first_name" << std::endl;
			std::getline(std::cin, _first_name);

			std::cout << "please enter _last_name" << std::endl;
			std::getline(std::cin, _last_name);

			std::cout << "please enter _nickname" << std::endl;
			std::getline(std::cin, _nickname);

			std::cout << "please enter _phone_number" << std::endl;
			std::getline(std::cin, _phone_number);

			std::cout << "please enter _darkest_secret" << std::endl;
			std::getline(std::cin, _darkest_secret);

			if (_first_name.empty() || _last_name.empty() || _nickname.empty() ||
					_phone_number.empty() ||_darkest_secret.empty() )
			{
				std::cout << "some fields are empty try again" << std::endl;
				return (1);
			}
			for(int i = 0; i < _phone_number.length(); i++)
			{
				if (!isdigit(_phone_number[i]))
				{
					std::cout << "phone number must be digit you call with char??" << std::endl;
					return (1);
				}
			}
			return (0);
		}

		std::string cut_string(std::string str)
		{
			if (str.length() > 10)
				return (str.substr(0, 9) + ".");
			return (str);
		}

		void	Contact::get_contact_cut(int pos) const{
			
			std::cout << std::setw(10) << pos << "|";
			std::cout << std::setw(10) << cut_string(_first_name) << "|";
			std::cout << std::setw(10) << cut_string(_last_name) << "|";
			std::cout << std::setw(10) << cut_string(_nickname) << "|" << std::endl;
		}

		void	Contact::get_contact_full() const{
			std::cout << "First name     :" << _first_name << std::endl;
			std::cout << "Last name      :" << _last_name << std::endl;
			std::cout << "_nickname       :" << _nickname << std::endl;
			std::cout << "Phone number   :" << _phone_number << std::endl;
			std::cout << "Darkest secret :" << _darkest_secret << std::endl;
		}


