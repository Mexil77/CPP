#include "PmergeMe.hpp"
#include <array>


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return(0);
	}

	std::string *numberArgs = new std::string[argc - 1];
	for (int i = 0; i < argc - 1; i++)
		numberArgs[i] = argv[i + 1];

	Pmerge sort(argc, numberArgs);
	try {
		sort.doFordJohnson();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
