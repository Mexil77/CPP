#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>

BitcoinExchange::BitcoinExchange(void){}

BitcoinExchange::BitcoinExchange(std::string nameDbFile){fillMap(nameDbFile);}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj): dataMap(obj.dataMap){}

BitcoinExchange::~BitcoinExchange(void){}

void BitcoinExchange::printMap(void){
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
		this->dataMap[key] = atof(&value[0]);
	}
	fdDB.close();
}

double	BitcoinExchange::getValueByDate(std::string date)
{
	std::map<std::string, double>::iterator iter;

	for (iter = this->dataMap.begin(); iter != this->dataMap.end(); iter++)
	{
		if (date < iter->first)
			return (--iter)->second;
	}
	return iter->second;
}
