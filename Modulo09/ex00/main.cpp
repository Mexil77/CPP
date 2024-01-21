#include "BitcoinExchange.hpp"
#include <fstream>
#include <regex>

bool isNumber(std::string s)
{
	const std::regex pattern("[+-]?([0-9]*[.])?[0-9]+");
	if (std::regex_match(s, pattern))
		return true;
	return false;
}

bool isDate(std::string s)
{
	const std::regex pattern("^([0-9]{4})-((01|02|03|04|05|06|07|08|09|10|11|12|))-([0-3][0-9])$");
	if (std::regex_match(s, pattern))
		return true;
	return false;
}

bool	printError(std::string error){
	std::cout << error << std::endl;
	return false;
}

bool	validateLineInput(std::string lineInput)
{
	std::string	date;
	std::string	value;
	float		floatValue;

	if (lineInput.find('|') == lineInput.npos)
		return printError("Error: bad input => " + lineInput);
	date = lineInput.substr(0, lineInput.find('|'));
	value = lineInput.substr(lineInput.find('|') + 1, lineInput.length());

	if (date.length() == 0 || value.length() == 0)
		return printError("Error: bad input => " + lineInput);

	date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
	value.erase(std::remove_if(value.begin(), value.end(), ::isspace), value.end());
	if (!isDate(date))
		return printError("Error: bad input => " + lineInput);
	if (!isNumber(value))
		return printError("Error: bad input => " + lineInput);
	floatValue = atof(&value[0]);
	if (floatValue < 0)
		return printError("Error: not a positive number.");
	if (floatValue > 1000)
		return printError("Error: too large a number.");
	
	return true;
}

void	printSuccesLine(std::string date, double inputValue, double dbValue){
	std::cout << date << " => " << inputValue << " : " << inputValue * dbValue << std::endl;
}

void	printResults(std::string inputFileName, BitcoinExchange &bitExch)
{
	std::string		lineInput;
	std::ifstream	fdInput;
	std::string		date;
	std::string		value;
	double			inputValue;
	double			dbValue;

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
			date = lineInput.substr(0, lineInput.find('|'));
			value = lineInput.substr(lineInput.find('|') + 1, lineInput.length());
			date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
			value.erase(std::remove_if(value.begin(), value.end(), ::isspace), value.end());
			inputValue = atof(&value[0]);
			dbValue = bitExch.getValueByDate(date);
			printSuccesLine(date, inputValue, dbValue);
		}
	}
	fdInput.close();
}

int	main(int argc, char **argv)
{
	BitcoinExchange		bitExch("data.csv");

	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return(0);
	}
	printResults(argv[1], bitExch);
	return 0;
}
