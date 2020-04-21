#include <iostream>

void welcome(std::string name)
{	
	std::cout << "Hello, " << name << "! \n";
	std::cout << "This is branch testing :) \n";
}

int main(int argc, char* argv[])
{
	if (argc == 2) welcome(argv[1]);
	else
	{
		std::cout << "You must type your name after the program name \n";
		std::cout << "<program name> <your name> \n";
		std::cout << "The program has stopped \n";
		return 1;
	}
}
