#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>

BitcoinExchange::BitcoinExchange(void){}

BitcoinExchange::BitcoinExchange(std::string nameDbFile){fillMap(nameDbFile);}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj): dataMap(obj.dataMap){}

BitcoinExchange::~BitcoinExchange(void){}

void	printSuccesLine(std::string date, double inputValue, double dbValue){
	std::cout << date << " => " << inputValue << " : " << inputValue * dbValue << std::endl;
}

bool	isFloatNegative(std::string stringNumber)
{
	int		i = 0;
	bool	point = false;

	if (stringNumber.length() == 1 || (!std::isdigit(stringNumber[i]) && stringNumber[i++] != '-'))
		return false;
	while (i < (int) stringNumber.length())
	{
		if (stringNumber[i] == '.' && point){
			if (point)
				return false;
			else
				point = true;
		}
		if (stringNumber[i] == '-')
			return false;
		if (!std::isdigit(stringNumber[i]) && stringNumber[i] != '.')
			return false;
		i++;
	}
	return true;
}

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

bool	isVallidFload(std::string stringNumber){
	if (isFloatPositive(stringNumber) || isFloatNegative(stringNumber) || (stringNumber.length() == 1 && stringNumber[0] == '0'))
		return true;
	return false;
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

void	BitcoinExchange::printMap(void){
	std::cout << "{" << std::endl;
	std::map<std::string, double>::iterator iter;

	std::cout.precision(std::numeric_limits<double>::digits10 + 1);
	for (iter = this->dataMap.begin(); iter != this->dataMap.end(); iter++)
	{
		std::cout	<< iter->first << ':' << iter->second << "," << std::endl;
	}
	std::cout << "}" << std::endl;
}

void BitcoinExchange::fillMap(std::string namedbFile){
    std::ifstream	fdDB;
	std::string		line;
	std::string		subLine;
	std::string		key;
	std::string		value;

	fdDB.open(namedbFile);
	if (!fdDB.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(0);
	}
	while (std::getline(fdDB, line))
	{
		std::stringstream	ss(line);
		std::getline(ss, subLine, ',');
		key = subLine;
		std::getline(ss, subLine, ',');
		value = subLine;
		if (isDate(key) && isVallidFload(value))
			this->dataMap[key] = atof(&value[0]);
	}
	fdDB.close();
}

double	BitcoinExchange::getValueByDate(std::string date)
{
	std::map<std::string, double>::iterator iter;

	iter = this->dataMap.begin();
	if (date < iter->first)
		return iter->second;
	while (iter != this->dataMap.end())
	{
		if (date < iter->first)
			return (--iter)->second;
		iter++;
	}
	iter--;
	return iter->second;
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
	if (!isVallidFload(value))
		return printError("Error: bad input => " + lineInput);
	floatValue = atof(&value[0]);
	if (floatValue < 0)
		return printError("Error: not a positive number.");
	if (floatValue > 1000)
		return printError("Error: too large a number.");
	
	return true;
}

void	BitcoinExchange::printResults(std::string inputFileName)
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
	while (std::getline(fdInput, lineInput))
	{
		if (validateLineInput(lineInput))
		{
			date = lineInput.substr(0, lineInput.find('|'));
			value = lineInput.substr(lineInput.find('|') + 1, lineInput.length());
			date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
			value.erase(std::remove_if(value.begin(), value.end(), ::isspace), value.end());
			inputValue = atof(&value[0]);
			dbValue = this->getValueByDate(date);
			printSuccesLine(date, inputValue, dbValue);
		}
	}
	fdInput.close();
}
