#include <iostream>
#include <string>


int main(void)
{
	std::string brainSpeech = "HI THIS IS BRAIN";
	std::string *strPtr = &brainSpeech;
	std::string& strRef = brainSpeech;

	std::cout << "address to string :" << &brainSpeech << std::endl;
	std::cout << "memory address held by stringPTR :" << strPtr << std::endl;
	std::cout << "address held by stringREF :" << &strRef << std::endl;
	std::cout  << std::endl;

	std::cout << "The value of string brainSpeech :" << brainSpeech << std::endl;
	std::cout << "The value pointed by strPtr :" << *strPtr << std::endl;
	std::cout << "The value pointed by strRef:" << strRef << std::endl;
	return (0);
}