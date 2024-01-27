#include "BitcoinExchange.hpp"
#include <fstream>

bool	isFloatPositive(std::string stringNumber)
{
	int		i = 0;
	bool	point = false;

	while (i < (int) stringNumber.length())
	{
		if (stringNumber[i] == '.' && point){
			if (point)
				return false;
			else
				point = true;
		}
		if (!std::isdigit(stringNumber[i]) && stringNumber[i] != '.')
			return false;
		i++;
	}
	return true;
}

bool	isIntPositive(std::string stringNumber)
{
	int	i = 0;

	while (i < (int) stringNumber.length())
	{
		if (!std::isdigit(stringNumber[i]))
			return false;
		i++;
	}
	return true;
}

bool	validateDatePosition(int dateNumber, int datePosition){
	switch (datePosition)
	{
	case 0:
		if (dateNumber > 0)
			return	true;
		else
			return	false;
		break;
	case 1:
		if (dateNumber > 0 && dateNumber < 13)
			return	true;
		else
			return	false;
		break;
	case 2:
		if (dateNumber > 0 && dateNumber < 32)
			return	true;
		else
			return	false;
		break;
	
	default:
		return	false;
		break;
	}
}

bool	isDate(std::string s)
{
	std::string			delimiter = "-";
	size_t				pos = 0;
	int					datePosition = 0;
	std::string			token;

	while ((pos = s.find(delimiter)) != std::string::npos) {
	    token = s.substr(0, pos);
		if (!isIntPositive(token) || !validateDatePosition(atoi(&token[0]), datePosition))
			return false;
		datePosition++;
	    s.erase(0, pos + delimiter.length());
	}
	if (!isIntPositive(s) || !validateDatePosition(atoi(&s[0]), datePosition))
		return false;
	return	true;
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
	if (!isFloatPositive(value))
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
