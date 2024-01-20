#include "BitcoinExchange.hpp"
#include <fstream>
#include <regex>

bool	validateLineInput(std::string lineInput)
{
	std::regex pat("[0-9]{4}$\\/[0-9]{1,2}\\/^[0-9]{1,2}");
	std::string	date;
	std::string	value;
	if (lineInput.find('|') == lineInput.npos)
	{
		return false;
	}
	date = lineInput.substr(0, lineInput.find('|'));
	value = lineInput.substr(lineInput.find('|') + 1, lineInput.length());
	if (date.length() == 0 || value.length() == 0)
	{
		return false;
	}
	date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
	value.erase(std::remove_if(value.begin(), value.end(), ::isspace), value.end());
	if (std::regex_match(date, pat))
	{
		std::cout << date << std::endl;
	}
	std::cout << value << std::endl;
	return true;
}

void	printResults(std::string inputFileName, std::map<std::string, std::string> &m)
{
	std::string		lineInput;
	std::ifstream	fdInput;

	(void)m;
	fdInput.open(inputFileName);
	if (!fdInput.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(0);
	}
	std::getline(fdInput, lineInput);
	while (std::getline(fdInput, lineInput))
	{
		if (validateLineInput(lineInput))
		{
		}
	}
}

int	main(int argc, char **argv)
{
	std::ifstream		fdInput;
	BitcoinExchange		bitExch;

	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return(0);
	}
	// fdInput.open(argv[1]);
	bitExch.fillMap("data.csv");
	printResults(argv[1], bitExch.dataMap);
	// bitExch.printMap();
	fdInput.close();
	return 0;
}
