#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string argument = av[i];
			for (int j = 0; j < argument.length(); j++)
				std::cout << (char)std::toupper(argument[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}