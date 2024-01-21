#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "ERROR: Invalid number of arguments" << std::endl; 
		return 1;
	}

	RPN::doRPN(argv[1]);

	return 0;
}