#include <iostream>
#include <string>
#include <fstream>

void	replace(void)
{

	//avec std::string.find je pourrai trouver une occurance
	

}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "an input is missing" << std::endl;
		std::cout << "please use the program this way: ./sedIsForLoser <filemane> <s1> <s2> " << std::endl;
		return 1;
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if(filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "an input is missing" << std::endl;
		std::cout << "please use the program this way: ./sedIsForLoser <filemane> <s1> <s2> " << std::endl;
		return 1;
	}

	std::ifstream inFile(filename.c_str());
	if (!inFile)
	{
		std::cout<< "infile was not created error" << std::endl;
		return 1;
	}
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile)
	{
		std::cout<< "outfile was not created error" << std::endl;
		return 1;
	}
	inFile.close();
	outFile.close();
	return 0;
}