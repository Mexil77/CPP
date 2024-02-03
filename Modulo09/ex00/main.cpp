#include "BitcoinExchange.hpp"
#include <fstream>

int	main(int argc, char **argv)
{
	BitcoinExchange		bitExch("data.csv");

	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return(0);
	}
	bitExch.printResults(argv[1]);
	return 0;
}
