#include <iostream>
#include <string>
#include <fstream>

void	replace(std::ifstream& inFile, std::ofstream& outFile,
			std::string s1, std::string s2)
{
	std::string line ;

	while (std::getline(inFile, line))
	{
		size_t pos_start = 0;
		size_t find_pos = 0;
		while ((find_pos = line.find(s1, pos_start)) != std::string::npos)
		{
			outFile << line.substr(pos_start, find_pos - pos_start);
			outFile << s2;
			pos_start = find_pos + s1.length();
		}
		outFile << line.substr(pos_start, find_pos - pos_start);
		if(!inFile.eof())
			outFile << std::endl;
	}

	return ;
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

	if(filename.empty() || s1.empty())
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
	replace(inFile, outFile, s1, s2);
	inFile.close();
	outFile.close();
	return 0;
}