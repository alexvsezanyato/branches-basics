#include <iostream>

void welcome(std::string name)
{	
	std::cout << "Hello, " << name << "! \n";
	std::cout << "This is branch testing :) \n";
}

int main(int argc, char* argv[])
{
	if (argc == 2) welcome(argv[1]);
}
